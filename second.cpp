
  EmployeeReport reports[n];
  int employeeId, bonus, overtime, year;
  for (int i = 0; i < n; i++) {
    cout<< "Enter the details for employee " << i+1 << endl;
    cout<< "Employee ID: ";
    cin >> employeeId;
    cout << "Bonus: ";
    cin >> bonus;
    cout << "Overtime: ";
    cin >> overtime;
    cout << "Year: ";
    cin >> year;
    reports[i].setPara(employeeId, bonus, overtime, year);
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    cout << "Report for employee " << i+1 << endl;
    reports[i].displayReport();
    
  }
  return 0;
}