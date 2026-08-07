
#include"Str.h"
class STRING;
using namespace std;
int main()
{
        STRING s1,s2,s3,s4;
        cout<<"Enter string s1 : ";
        cin >> s1;
        cout<<"s2[s1] is done\n";
        s2[s1];
        cout<<"s3=s1 is done\n";
        s3=s1;
        cout<<"s4=s1+s2 is done\n";
        s4=s1+s2;
        cout<<"string s1 is : ";
        cout<<s1;
        cout<<"\nstring s2 is : ";
        cout<<s2;
        cout<<"\nstring s3 is : ";
        cout<<s3;
        cout<<"\nstring s4 is : ";
        cout<<s4;
        cout<<endl<<s3<< " < " << s4 << " = " <<(s3<s4)<<endl;
        cout<<endl<<s3<< " <= " << s4 << " = " <<(s3<=s4)<<endl;
        cout<<endl<<s3<< " > " << s4 << " = " <<(s3>s4)<<endl;
        cout<<endl<<s3<< " >= " << s4 << " = " <<(s3>=s4)<<endl;
        cout<<endl<<s3<< " == " << s4 << " = " <<(s3==s4)<<endl;
        cout<<endl<<s3<< " != " << s4 << " = " <<(s3!=s4)<<endl;
        cout<<"strcmp(s4,s3) :"<<strcmp(s4,s3)<<endl;
        cout<<"strncmp(s4,s3,2) :"<<strncmp(s4,s3,2)<<endl;
        cout<<"strstr(s4, s3) :"<<strstr(s4,s3)<<endl;
        cout<<"strchr(s4,'c') :"<<strchr(s4,'c')<<endl;
        cout<<"strrchr(s4,'c') :"<<strrchr(s4,'c')<<endl;
        cout<<"strrev(s4) :"<<strrev(s4)<<endl;
        strupper(s1);
        strcpy(s2,s1);
        cout<<"strupper(s1) :"<<s1<<endl<<"strcpy(s2,s1) is done"<<endl<<"string s2 : "<<s2<<endl;
        strlower(s1);
        strncpy(s2,s1,2);
        cout<<"strlower(s1) :"<<s1<<endl<<"strncpy(s2,s1,2) is done"<<endl<<"string s2 : "<<s2<<endl;
}
