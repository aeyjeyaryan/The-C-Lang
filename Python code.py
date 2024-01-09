# Initialize an empty dictionary to store student information
students_dict = {}

def display_students():
    print("\nCurrent Student Information:")
    print("----------------------------")
    for roll, name in students_dict.items():
        print(f"Roll Number: {roll}, Name: {name}")

def update_student_info():
    roll_number = input("Enter the roll number of the student: ")
    
    # Check if the roll number exists in the dictionary
    if roll_number in students_dict:
        new_name = input(f"Enter the new name for the student with roll number {roll_number}: ")
        students_dict[roll_number] = new_name
        print("Student information updated successfully!")
    else:
        print(f"Student with roll number {roll_number} not found.")

# Main program loop
while True:
    print("\nMenu:")
    print("1. Display Student Information")
    print("2. Update Student Information")
    print("3. Quit")
    
    choice = input("Enter your choice (1/2/3): ")

    if choice == "1":
        display_students()
    elif choice == "2":
        update_student_info()
    elif choice == "3":
        print("Exiting program. Goodbye!")
        break
    else:
        print("Invalid choice. Please enter a valid option.")
