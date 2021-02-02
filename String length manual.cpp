#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    getline(cin, name);
    int i=0, count=0;
    while(name[i] != '\0'){
        count++;
        i++;
    }
    cout<<"String length is: "<<count<<endl;
    return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
    string name;
    cin>>name;
    int i, count =0;
    for(i=0; i<name[i] != '\0'; i++){
        count++;
    }cout<<"String length is: "<<count<<endl;
}
*/
