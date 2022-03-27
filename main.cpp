#include "DynamicArray.h"
#include <iostream>
#include <string> 
using namespace std;

int main(){
  char data_type; 
  int size; 

  cout << "What data type should the array be? \nEnter i for intgers, d for double, s for string." << endl;
  cin >> data_type; 
  cout << "Enter size of array" << endl; 
  cin >> size; 
  
  DynArray<int> array1 = DynArray<int>(size); 
  DynArray<double> array2 = DynArray<double>(size);
  DynArray<string> array3 = DynArray<string>(size);

 char input; 
 string string_value; 
  do {  
    cout << "\nEnter a to append, i to insert, r to remove. s to set. z to resize."
         << "\nOr enter q to quit" <<endl; 
    cin >> input; 

    switch(input){                 
      case 's':{       
        int pos;
        if (data_type == 'i') {    
             int value;                          
            cout << "Enter array of position followed by the value" <<endl;  
            cin >> pos;  
            cin >> value;                                  
           array1.set( pos, value); 
           cout << "\nArray: \n";
           for (int i=0; i < array1.size(); i++) {
            cout << array1.get(i) <<endl;
             } } 
        if (data_type == 'd') { 
          double value; 
          cout << "Enter array of position followed by the value" <<endl;  
            cin >> pos;  
            cin >> value;                                  
           array2.set( pos, value); 
           cout << "\nArray: \n";
           for (int i=0; i < array2.size(); i++) {
            cout << array2.get(i) <<endl;
             } } 
        if (data_type == 's')
          cout << "Enter array of position" << endl; 
          cin >>pos; 
          cout << "Enter the value" <<endl;  
          cin >> string_value;                                  
           array3.set( pos, string_value); 
           cout << "\nArray: \n";
           for (int i=0; i < array3.size(); i++) {
            cout << array3.get(i) <<endl;
             }  
        break; }
      case 'i':
        int pos; 
        if (data_type == 'i') {    
             int value;                          
            cout << "Enter array of position followed by the value" <<endl;  
            cin >> pos;  
            cin >> value;                                   
           array1.insert(pos, value); 
           cout << "\nArray: \n";
           for (int i=0; i < array1.size(); i++) {
            cout << array1.get(i) <<endl;
             } } 
        if (data_type == 'd') { 
          double value;                          
          cout << "Enter array of position followed by the value" <<endl;  
          cin >> pos;  
          cin >> value;                                   
          array2.insert(pos, value); 
           cout << "\nArray: \n";
           for (int i=0; i < array2.size(); i++) {
            cout << array2.get(i) <<endl;
             } } 
        if (data_type == 's')
          cout << "Enter array of position" << endl; 
          cin >>pos; 
          cout << "Enter the value" <<endl;  
          cin >> string_value;                                  
           array3.insert(pos, string_value); 
           cout << "\nArray: \n";
           for (int i=0; i < array3.size(); i++) {
            cout << array3.get(i) <<endl;
             } 
        break;
      case 'r':
        int rpos; 
        cout << "Enter array position to remove" << endl; 
        cin >> rpos; 
        if (data_type == 'i'){
           array1.remove(rpos);             //calls remove function
            cout << "\nArray: \n ";
            for (int i=0; i < array1.size(); i++) {
             cout << array1.get(i) <<endl;
             }} 
        if (data_type == 'd'){
          array2.remove(rpos);             //calls remove function
            cout << "\nArray: \n";
            for (int i=0; i < array2.size(); i++) {
             cout << array2.get(i) <<endl;
             }} 
        if (data_type == 's'){
          array3.remove(rpos);             //calls remove function
            cout << "\nArray: \n";
            for (int i=0; i < array3.size(); i++) {
             cout << array3.get(i) <<endl;
             }}
        break; 
      case 'a':
        if (data_type == 'i'){
          int append; 
          cout << "Enter value to append" <<endl; 
          cin >> append; 
          array1.append(append); 
          cout << "\nArray: \n";
          for (int i=0; i < array1.size(); i++) {
           cout << array1.get(i) <<endl;
             }} 
        if (data_type == 'd'){
          double append; 
          cout << "Enter value to append" <<endl; 
          cin >> append; 
          array2.append(append); 
          cout << "\nArray: \n";
          for (int i=0; i < array2.size(); i++) {
           cout << array2.get(i) <<endl;
             }} 
        if (data_type == 's'){
          string append; 
          cout << "Enter value to append" <<endl; 
          cin >> append; 
          array3.append(append); 
          cout << "\nArray: \n";
          for (int i=0; i < array3.size(); i++) {
           cout << array3.get(i) <<endl;
             }} 
        break;
      case 'z':
        int newsize; 
        if (data_type == 'i'){   
          cout << "Enter new size" <<endl; 
          cin >> newsize;
          array1.resize(newsize);      
          cout << "\nArray: \n";
          for (int i=0; i < array1.size(); i++) {
            cout << array1.get(i) <<endl;
             }} 
        if (data_type == 'd'){   
          cout << "Enter new size" <<endl; 
          cin >> newsize;
          array2.resize(newsize);      
          cout << "\nArray: \n";
          for (int i=0; i < array2.size(); i++) {
            cout << array2.get(i) <<endl;
             }} 
        if (data_type == 's'){   
          cout << "Enter new size" <<endl; 
          cin >> newsize;
          array3.resize(newsize);      
          cout << "\nArray: \n";
          for (int i=0; i < array3.size(); i++) {
            cout << array3.get(i) <<endl;
             }} 
        break; 
      default: input='q'; 
    } 
  }while (input != 'q'); 

  #ifdef _MSC_VER
    system("pause");
  #endif
 return 0;
}


/*/int main() {
  DynArray<int> array1; 
  DynArray<string> array2; 
  DynArray<int> array3 = DynArray<int>(20); 

  array1.append(10);
  array1.append(20); 
  array1.append(30);
  array1.append(40); 
  array1.append(50);
  array1.append(60);
  array1.append(70);
  array1.append(80);
  array1.append(90);
  array1.append(100);
  array1.append(110);
  array1.append(120);
  array1.set(0, 40);
  array1.insert(11, 5); 
  array1.insert(0, 7); 
  array1.remove(0);
  array1.remove(11); 
  array1.resize(50); 
  cout <<array1.size() << " " << endl; 

  array2.append("dog");
  array2.append("cat");
  array2.set(1, "bird"); 
  array2.insert(2, "DWAG"); 
  array2.remove(2); 
  array2.remove(1); 
  array2.resize(5); 
  array2.append("doggie");
  cout << array2.size() << " " << endl; 

  for (int i = 0; i < array1.size(); i++)
		cout << array1.get(i) << endl;
	for (int i = 0; i < array2.size(); i++)
		cout << array2.get(i) << endl;

	return 0;
}
/*/ 