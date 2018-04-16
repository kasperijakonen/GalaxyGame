TEMPLATE = subdirs

SUBDIRS += \
    Student \
    Course \
    CourseTests \
    StudentTests

CONFIG += c++11

Student.depends = Course
CourseTests.depends = Course
CourseTests.depends = Student

StudentTests.depends = Student
