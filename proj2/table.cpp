#include<iostream>
#include<format>

int lenght[4],d1,d2,d3,d4;
int max_len;


int main(){
    using std::cout;
    using std::cin;

    for(int count = 0; count < 4; ++count){
        cout << std::format("enter {} table leg lenght: ",count);
        cin >> lenght[count];}

    

    max_len = 0;

    int i = 0;
    while (i < 4)
    {
            max_len = lenght[i];
        i++;
    }
    

    std::cout << max_len;

    return 0;
}