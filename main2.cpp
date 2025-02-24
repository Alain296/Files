#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_SUBJECTS = 100;
    //this is maximum number of subject you can recorsd it marks 
    string subjects[MAX_SUBJECTS];
    //this array will store name of subject 
    int marks[MAX_SUBJECTS];
    // this will store marks corresponding to subject
    int count = 0;
    // it will count number of dubject enteres
    int choice;
    // it will record you choiche 
    
    do {
    	// this is menu four tyour choice according to what you want
        cout << "\nMenu:\n";
        cout << "1. Insert subject and marks\n";
        cout << "2. Delete marks for a subject\n";
        cout << "3. Search for marks by subject\n";
        cout << "4. Display all subjects and marks\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        
        if (choice == 1) {
        	//for choice one you enter the name and marks of subject
            if (count < MAX_SUBJECTS) {
                cout << "Enter subject name: ";
                getline(cin, subjects[count]);
                cout << "Enter marks: ";
                cin >> marks[count];
                count++;
                cout << "Subject and marks inserted successfully!\n";
            } else {
                cout << "Maximum number of subjects reached!\n";
            }
        } else if (choice == 2) {
        	// for choice two you enter index of subject then you delete its from record
            int index;
            cout << "Enter index of subject to delete: ";
            cin >> index;
            if (index >= 0 && index < count) {
                for (int i = index; i < count - 1; i++) {
                    subjects[i] = subjects[i + 1];
                    marks[i] = marks[i + 1];
                    // here it first search for that certain index which you specified  if is available it 
                    // for that for loop if specifies all about where index in inserted index and after it replace the subject deleted by the remaining one 
                }
                count--;
                cout << "Subject and marks deleted successfully!\n";
            } else {
                cout << "Invalid index!\n";
            }
        } else if (choice == 3) {
            string subject;
            cout << "Enter subject name to search for: ";
            getline(cin, subject);
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (subjects[i] == subject) {
                    cout << "Marks for " << subject << ": " << marks[i] << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Subject not found!\n";
                // for here that for loop get signal afte getline function after readin what is inside the subject and if subject is found
				// for will count the place value if it if is found it we break ales it pop up the notification that it didm't found it 
            }
        } else if (choice == 4) {
            cout << "Stored Subjects and Marks:\n";
            for (int i = 0; i < count; i++) {
                cout << subjects[i] << ": " << marks[i] << "\n";
                // output fr all records of subject
            }
        } else if (choice == 5) {
            cout << "Exiting program.\n";
        } else {
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
    
    return 0;
}

