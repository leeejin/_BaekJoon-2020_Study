using namespace std; 
int main() 
{ 
int grade[5]; 
int sum = 0; 
int average = 0;

for (int i = 0; i < 5; i++) 
{ 
cin >> grade[i]; 
} 
 for (int i = 0; i < 5; i++) 
 {
  if (grade[i] < 40)
  { grade[i] = 40;  
  } sum += grade[i]; 
   } 
   average = sum / 5; 
   cout << average<<endl; 
   return 0; }
