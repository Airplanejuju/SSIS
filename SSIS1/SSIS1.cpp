#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

struct Student {
    std::string name;
    std::string studentID;
    std::string course;
};

struct Course {
    std::string name;
    int numStudents;
};

std::vector<Student> students;
std::vector<Course> courses;

// Load student and course information from CSV files
void loadStudentInformation() {
    std::ifstream studentFile("students.csv");
    std::ifstream courseFile("courses.csv");

    std::string line;

    while (std::getline(studentFile, line)) {
        std::istringstream iss(line);
        std::string name, studentID, course;

        std::getline(iss, name, ',');
        std::getline(iss, studentID, ',');
        std::getline(iss, course, ',');

        students.push_back({ name, studentID, course });
    }

    while (std::getline(courseFile, line)) {
        std::istringstream iss(line);
        std::string course, numStudents;

        std::getline(iss, course, ',');
        std::getline(iss, numStudents, ',');

        courses.push_back({ course, std::stoi(numStudents) });
    }

    studentFile.close();
    courseFile.close();
}

// Save student and course information to CSV files
void saveStudentInformation() {
    std::ofstream studentFile("students.csv");
    std::ofstream courseFile("courses.csv");

    for (const auto& student : students) {
        studentFile << student.name << "," << student.studentID << "," << student.course << std::endl;
    }

    for (const auto& course : courses) {
        courseFile << course.name << "," << course.numStudents << std::endl;
    }

    studentFile.close();
    courseFile.close();
}

// Add a new student
void addStudent() {
    system("cls");
    std::string name, studentID, course;

    std::cout << "Enter student name: ";
    std::getline(std::cin, name);

    std::cout << "Enter student ID: ";
    std::getline(std::cin, studentID);

    std::cout << "Enter course: ";
    std::getline(std::cin, course);

    // Check if student ID already exists
    auto it = std::find_if(students.begin(), students.end(), [&](const Student& s) {
        return s.studentID == studentID;
        });

    if (it != students.end()) {
        std::cout << "Failed to add student. Student ID already exists." << std::endl;
        return;
    }

    students.push_back({ name, studentID, course });

    bool found = false;
    for (auto& courseInfo : courses) {
        if (courseInfo.name == course) {
            courseInfo.numStudents++;
            found = true;
            break;
        }
    }

    if (!found) {
        courses.push_back({ course, 1 });
    }
}

// Delete a student
void deleteStudent() {
    system("cls");
    std::string studentID;

    std::cout << "Enter student ID to delete: ";
    std::getline(std::cin, studentID);

    auto it = std::find_if(students.begin(), students.end(), [&](const Student& student) 
        {
        return student.studentID == studentID;
        });

    if (it != students.end()) {
        const std::string course = it->course;
        students.erase(it);

        for (auto& courseInfo : courses) {
            if (courseInfo.name == course) {
                courseInfo.numStudents--;
                if (courseInfo.numStudents == 0) {
                    courses.erase(std::remove_if(courses.begin(), courses.end(), [&](const Course& c) {
                        return c.name == course;
                        }), courses.end());
                }
                break;
            }
        }
    }
}

// Modify student details
void modifyStudent() {
    system("cls");
    std::string studentID;

    std::cout << "Enter student ID to modify: ";
    std::getline(std::cin, studentID);

    auto it = std::find_if(students.begin(), students.end(), [&](const Student& student) {
        return student.studentID == studentID;
        });

    if (it != students.end()) 
    {
        std::cout << "What would you like to modify?" << std::endl;
        std::cout << "1. Name" << std::endl;
        std::cout << "2. Student ID" << std::endl;
        std::cout << "3. Course" << std::endl;

        std::string choice;
        std::getline(std::cin, choice);

        if (choice == "1") {
            std::string newName;
            std::cout << "Enter new name: ";
            std::getline(std::cin, newName);
            it->name = newName;
            std::cout << "Name updated successfully." << std::endl;
        }
        else if (choice == "2") {
            std::string newID;
            std::cout << "Enter new student ID: ";
            std::getline(std::cin, newID);
            it->studentID = newID;
            std::cout << "Student ID updated successfully." << std::endl;
        }
        else if (choice == "3") {
            std::string newCourse;
            std::cout << "Enter new course: ";
            std::getline(std::cin, newCourse);

            const std::string oldCourse = it->course;
            it->course = newCourse;

            auto courseIt = std::find_if(courses.begin(), courses.end(), [&](const Course& course) {
                return course.name == oldCourse;
                });

            if (courseIt != courses.end()) {
                courseIt->numStudents--;
                if (courseIt->numStudents == 0) {
                    courses.erase(courseIt);
                }
            }

            auto newCourseIt = std::find_if(courses.begin(), courses.end(), [&](const Course& course) {
                return course.name == newCourse;
                });

            if (newCourseIt != courses.end()) {
                newCourseIt->numStudents++;
            }
            else {
                courses.push_back({ newCourse, 1 });
            }

            std::cout << "Course updated successfully." << std::endl;
        }
    }
    else
    {
        std::cout << "Student with ID " << studentID << " not found." << std::endl;
    }
}

// Display student information
void displayStudents() {

    system("cls");

    std::cout << "Student Information:" << std::endl;
    std::cout << "---------------------" << std::endl;

    for (const auto& student : students) {
        std::cout << "Name: " << student.name << std::endl;
        std::cout << "Student ID: " << student.studentID << std::endl;
        std::cout << "Course: " << student.course << std::endl;
        std::cout << "---------------------" << std::endl;
    }
}

// Search for a student by student ID or course name
void searchStudent() {
    system("cls");
    std::cout << "Search Student" << std::endl;
    std::cout << "--------------" << std::endl;

    std::cout << "1. Search by Student ID" << std::endl;
    std::cout << "2. Search by Course Name" << std::endl;
    std::cout << "Enter your choice (1-2): ";

    std::string choice;
    std::getline(std::cin, choice);

    if (choice == "1") {
        std::string studentID;
        std::cout << "Enter Student ID: ";
        std::getline(std::cin, studentID);

        auto it = std::find_if(students.begin(), students.end(), [&](const Student& student) {
            return student.studentID == studentID;
            });

        if (it != students.end()) {
            std::cout << "\nStudent Found:\n" << std::endl;
            std::cout << "Name: " << it->name << std::endl;
            std::cout << "Student ID: " << it->studentID << std::endl;
            std::cout << "Course: " << it->course << std::endl;
        }
        else {
            std::cout << "Student with ID " << studentID << " not found." << std::endl;
        }
    }
    else if (choice == "2") {
        std::string courseName;
        std::cout << "Enter Course Name: ";
        std::getline(std::cin, courseName);

        std::cout << "\nStudents in Course " << courseName << ":\n" << std::endl;
        for (const Student& student : students) {
            if (student.course == courseName) {
                std::cout << "Name: " << student.name << "\nStudent ID: " << student.studentID << std::endl;
            }
        }
    }
    else {
        std::cout << "Invalid choice." << std::endl;
    }
}

//Modify course name
void modifyCourse()
{
    system("cls");
    std::string courseName;

    std::cout << "Enter course to modify: ";
    std::getline(std::cin, courseName);

    auto it = std::find_if(courses.begin(), courses.end(), [&](const Course& course) {
        return course.name == courseName;
        });

    if (it != courses.end()) 
    {
        std::cout << "Enter new course name: ";
        std::string newCourseName;
        std::getline(std::cin, newCourseName);

        // Modify course name in the courses vector
        it->name = newCourseName;

        // Modify course name in student records
        for (auto& student : students)
        {
            if (student.course == courseName)
            {
                student.course = newCourseName;
            }
        }

        std::cout << "Course name updated successfully." << std::endl;
    }
    else
    {
        std::cout << "Course: " << courseName << " not found." << std::endl;
    }
}

//Display course information
void displayCourses() {
    system("cls");

    std::cout << "Course Information:" << std::endl;
    std::cout << "---------------------" << std::endl;

    for (const auto& course : courses) {
        std::cout << "Course: " << course.name << std::endl;
        std::cout << "Number of Students: " << course.numStudents << std::endl;
        std::cout << "---------------------" << std::endl;
    }
}

// Search for a course by course name
void searchCourse() {
    system("cls");
    std::cout << "Search Course" << std::endl;
    std::cout << "-------------" << std::endl;

    std::string courseName;
    std::cout << "Enter Course Name: ";
    std::getline(std::cin, courseName);

    auto it = std::find_if(courses.begin(), courses.end(), [&](const Course& course) {
        return course.name == courseName;
        });

    if (it != courses.end()) {
        std::cout << "\nCourse Found:" << std::endl;
        std::cout << "\nCourse Name: " << it->name << std::endl;
        std::cout << "Number of Students: " << it->numStudents << std::endl;
    }
    else {
        std::cout << "Course with name " << courseName << " not found." << std::endl;
    }
}

//delete course
void deleteCourse() {
    system("cls");
    std::cout << "Delete Course" << std::endl;
    std::cout << "-------------" << std::endl;

    std::string courseName;
    std::cout << "Enter Course Name: ";
    std::getline(std::cin, courseName);

    auto it = std::find_if(courses.begin(), courses.end(), [&](const Course& course) {
        return course.name == courseName;
        });

    if (it != courses.end()) {
        std::cout << "\nCourse Found:" << std::endl;
        std::cout << "\nCourse Name: " << it->name << std::endl;
        std::cout << "Number of Students: " << it->numStudents << std::endl;

        char toDel;

        std::cout << "\nDelete Course? (Y / N) :" << std::endl;
        std::cin >> toDel;

        if (toDel == 'Y' || toDel == 'y')
        {
            //delete course name and num of students
            auto it = std::find_if(courses.begin(), courses.end(), [&](const Course& course)
                {
                    return course.name == courseName;
                });

            if (it != courses.end()) {
                const std::string course = it->name;
                courses.erase(it);
            }

            //delete students with that course 
            auto it2 = std::find_if(students.begin(), students.end(), [&](const Student& student)
                {
                    return student.course == courseName;
                });

            if (it2 != students.end()) {
                const std::string course = it2->course;
                students.erase(it2);

                for (auto& courseInfo : courses) {
                    if (courseInfo.name == course) {
                        courseInfo.numStudents--;
                        if (courseInfo.numStudents == 0) {
                            courses.erase(std::remove_if(courses.begin(), courses.end(), [&](const Course& c) {
                                return c.name == course;
                                }), courses.end());
                        }
                        break;
                    }
                }
            }
        }
        else
        {
            std::cout << "Course: " << courseName << " not Deleted." << std::endl;
        }

    }
    else {
        std::cout << "Course with name " << courseName << " not found." << std::endl;
    }
}

//add course
void addCourse()
{
    system("cls");
    std::string name;

    std::cout << "Enter course name: ";
    std::getline(std::cin, name);

    // Check if course name already exists
    auto it = std::find_if(courses.begin(), courses.end(), [&](const Course& c) {
        return c.name == name;
        });

    if (it != courses.end()) {
        std::cout << "Failed to add course. Course name already exists." << std::endl;
        return;
    }

    courses.push_back({ name, 0});
}

// Main program execution
int main() {
    loadStudentInformation();

    while (true) {
        std::cout << std::endl;
        std::cout << "--------------------------" << std::endl;
        std::cout << "Student Information System\n" << std::endl;
        std::cout << "1. Add Student Details" << std::endl;
        std::cout << "2. Add Course Details\n" << std::endl;
        std::cout << "3. Delete Student" << std::endl;
        std::cout << "4. Delete Course Details\n" << std::endl;
        std::cout << "5. Modify Student" << std::endl;
        std::cout << "6. Modify Course\n" << std::endl;
        std::cout << "7. Display Students" << std::endl;
        std::cout << "8. Display Courses\n" << std::endl; 
        std::cout << "9. Search Student" << std::endl;
        std::cout << "10. Search Course\n" << std::endl;
        std::cout << "11. Exit\n" << std::endl;
        std::cout << "Enter your choice (1-11): ";

        std::string choice;
        std::getline(std::cin, choice);

        if (choice == "1") {
            addStudent();
        }
        else if (choice == "2") {
            addCourse();
        }
        else if (choice == "3") {
            deleteStudent();
        }
        else if (choice == "4") {
            deleteCourse();
        }
        else if (choice == "5") {
            modifyStudent();
        }
        else if (choice == "6") {
            modifyCourse();
        }
        else if (choice == "7") {
            displayStudents();
        }
        else if (choice == "8") {
            displayCourses(); 
        }
        else if (choice == "9") {
            searchStudent();
        }
        else if (choice == "10") {
            searchCourse();
        }
        else if (choice == "11") {
            break;
        }
        else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    saveStudentInformation();
    std::cout << "Program exited successfully." << std::endl;

    return 0;
}
