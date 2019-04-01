students_data = []


while True:
    student = input("Enter the name of the student")
    students_data.append(student)
    print("Do you want to enter the data of a student? [y/n]")
    choice=input("Enter your choice");
    if choice == 'y':
        continue;
    else:
        break;
print(students_data);


