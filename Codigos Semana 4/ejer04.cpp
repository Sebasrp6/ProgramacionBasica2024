#include <iostream>
using namespace std;
int main()
{
    int n1, n2, answer;
    char op;
    do{
        cout << "Enter two numbers";
        cin >> n1 >> n2;
        answer = n1 + n2;
        cout << "The sum of " << n1 << " + " << n2 << " is equal to " <<answer<<endl;
        
        cout<<"Do you wish to continue? (s/n):";
        cin>>op;
        op=tolower(op);
    }while(op=="s");
    cout<<"see you soon!!";  
    return 0;
}