#include <iostream>
#include "../src/project.hpp"

using namespace std;

int main(){

    int tab1[5];
    int tab2[5] = {-12,-40,0,49,333};

    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        tab1[i] = rand() % 100;
    }

for(int i = 0; i < 5; i++)
{
    if(sum(tab1[i],tab2[i]) == (tab1[i] + tab2[i]))
        {
        cout<<tab1[i]<<" + "<<tab2[i]<<" = "<<sum(tab1[i],tab2[i])<<endl;
        cout<<"test ok"<<endl;
        }   
    else
        {
        cout<<tab1[i]<<" + "<<tab2[i]<<" != "<<sum(tab1[i],tab2[i])<<endl;    
        cout<<"failed program"<<endl;    
        }
}

return 0;

}
