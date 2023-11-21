#include <iostream>

using namespace std;

int main (){
    int siblings, popsicle;

    cin>>siblings>>popsicle;

    if ( siblings * popsicle && popsicle%siblings == 0){
        cout<<"give away"<<endl;

    }else{
        cout<<"eat by yourself"<<endl;

    }

    return 0;
}
