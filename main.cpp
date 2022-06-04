#include <iostream>
using namespace std;
int main() {
    //asking for earth weight
    double weight;
    int planet;
    cout<<"What's your weight on earth\n";
    cin>>weight;
    /*formula for weight
    weight=weight on earth*relative gravity*/

    cout<< "You want to know your weight on which planet?\n";
    //assigning numbers to planets
    cout<< "P.S\n"
        "  Mercury-1\n"
           "  Venus-2\n"
           "  Mars-3\n"
           "  Jupiter-4\n"
           "  Saturn-5\n"
           "  Uranus-6\n"
           "  Neptune-7\n";
    cin>>planet;

   

    switch( planet){
        case 1:
            double MercuryWeight;
            MercuryWeight= weight* 0.38;
            cout<<"Your weight on Mercury is "<< MercuryWeight<<"\n";
        break;
        case 2:
            double VenusWeight;
            VenusWeight=weight*0.91;
            cout<<"Your weight on Venus is "<< VenusWeight<<"\n";
        break;
        case 3:
            double MarsWeight;
            MarsWeight=weight*0.38;
            cout<<"Your weight on Mars is "<<MarsWeight<<"\n";
        break;
        case 4:
            double JupiterWeight;
            JupiterWeight=weight*2.34;
            cout<<"Your weight on Jupiter is "<< JupiterWeight<<"\n";
        break;
        case 6:
            double UranusWeight;
            UranusWeight= weight*0.92;
            cout<<"Your weight on Uranus is "<< UranusWeight<<"\n";
        break;
        case 5:
            double SaturnWeight;
            SaturnWeight= weight*1.06;
            cout<<"Your weight on Saturn is "<<SaturnWeight<<"\n";
        break;
        case 7:
            double NeptuneWeight;
            NeptuneWeight=weight*1.19;
            cout<<"Your weight on Neptune is "<<NeptuneWeight<<"\n";
        break;
        default :
            cout<<"Oops...please enter a number corresponding to a planet";
            break;

    }



}
