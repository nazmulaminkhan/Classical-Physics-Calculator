#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char op;
    double force1;
    double force2;
    double valueMass;
    double valueGravity;
    double valueForce;
    double forcetotal;
    double weightForce;
    double elastic_force;
    double spring_constant;
    double moving_the_rest_position;
    double friction_force;
    double f_f_static;
    double f_f_dynamic;
    double pressing_force;
    double parallelogram_force;
    double mu_s;
    double mu_d;
    double height;
    double length;
    double balancing_force;
    double binding_force;
    double base;

    // Header title
    cout<<"--------- Classical physics calculator ----------"<<'\n';
    cout<<"Here you can calculate the forces"<<'\n';
    cout<<"For operations select:"<<endl;
    cout<<"[a] for calculate TOTAL FORCE"<<endl;
    cout<<"[b] for calculate WEIGHT-FORCE"<<endl;
    cout<<"[c] for calculate TOTAL FORCE PARALL."<<endl;
    cout<<"[d] for calculate GRAVITY"<<endl;
    cout<<"[e] for calculate MASS"<<endl;
    cout<<"[f] for calculate Elastic Force"<<endl;
    cout<<"[g] for calculate Spring constant"<<endl;
    cout<<"[h] for calculate Moving the rest position"<<endl;
    cout<<"[i] for calculate Friction Force Static"<<endl;
    cout<<"[j] for calculate Friction Force Dynamic"<<endl;
    cout<<"[k] for calculate Parallelogram Force"<<endl;
    cout<<"[l] for calculate Pressing Force"<<endl;
    cout<<"[m] for calculate Binding force"<<endl;
    cout<<"[n] for calculate Balancing force"<<endl;
    cout<<"[o] for calculate Triangle length"<<endl;
    cout<<"[p] for calculate Base"<<endl;
    cout<<"[q] for calculate Length"<<endl;

    cout<<""<<endl;

    // input selection
    cout<<"select which operation you want to execute?: ";
    cin>>op;
    cout<<'\n';

    switch (op)
    {
    case 'a':
        cout<<"Enter the value of FORCE 1: ";
        cin>>force1;
        cout<<"Enter the value of FORCE 2: ";
        cin>>force2;
        forcetotal = force1+force2;
        cout<<"Your value of Force Total is "<<forcetotal<<" N"<<endl;
        break;

    case 'b':
    cout<<"Enter the value of Mass: ";
    cin>>valueMass;
    cout<<"Enter the value of Gravity: ";
    cin>>valueGravity;
    weightForce = valueMass*valueGravity;
    cout<<"Your value of Weight force is "<<weightForce<<" N"<<endl;
    break;

    case 'c':
    cout<<"Enter the value of Force 1: ";
    cin>>force1;
    cout<<"Enter the value of Force 2: ";
    cin>>force2;
    forcetotal = sqrt(pow(force1, 2)+pow(force2, 2));
    cout<<"Your value of Total force of Parallellogram is "<<forcetotal<<" N"<<endl;
    break;

    case 'd':
    cout<<"Enter the value of Weight-force: ";
    cin>>weightForce;
    cout<<"Enter the value of Mass: ";
    cin>>valueMass;
    valueGravity = weightForce/valueMass;
    cout<<"Your value of Gravity is "<<valueGravity<<" N/kg"<<endl;
    break;

    case 'e':
    cout<<"Enter the value of Weight-force: ";
    cin>>weightForce;
    cout<<"Enter the value of Gravity: ";
    cin>>valueGravity;
    valueMass = weightForce/valueGravity;
    cout<<"Your value of Mass is "<<valueMass<<" kg"<<endl;
    break;

    case 'f':
    cout<<"Enter the value of Spring constant: ";
    cin>>spring_constant;
    cout<<"Enter the value of moving the rest position: ";
    cin>>moving_the_rest_position;
    elastic_force = spring_constant*moving_the_rest_position;
    cout<<"Your value of Elastic force is "<<elastic_force<<" N"<<endl;
    break;

    case 'g':
    cout<<"Enter the value of Elastic force: ";
    cin>>elastic_force;
    cout<<"Enter the value of Moving the rest position: ";
    cin>>moving_the_rest_position;
    spring_constant=elastic_force/moving_the_rest_position;
    cout<<"Your value of Spring constant is "<<spring_constant<<" N/m"<<endl;
    break;

    case 'h':
    cout<<"Enter the value of Elastic force: ";
    cin>>elastic_force;
    cout<<"Enter the value of Spring constant: ";
    cin>>spring_constant;
    moving_the_rest_position=elastic_force/spring_constant;
    cout<<"Your value of Moving the rest position is "<<moving_the_rest_position<<" m"<<endl;
    break;
    case 'i':
    cout<<"Enter the value of Mu static: ";
    cin>>mu_s;
    cout<<"Enter the value of Pressing Force: ";
    cin>>pressing_force;
    f_f_static = mu_s*pressing_force;
    cout<<"Your value of Friction Force static is "<<f_f_static<<endl;
    break;
    case 'j':
    cout<<"Enter the value of Mu dynamic: ";
    cin>>mu_d;
    cout<<"Enter the value of Pressing Force: ";
    cin>>pressing_force;
    f_f_dynamic=mu_d*pressing_force;
    cout<<"Your value of Friction Force dynamic is "<<f_f_dynamic<<endl;
    break;
    case 'k':
    cout<<"Enter the value of Weight force: ";
    cin>>weightForce;
    cout<<"Enter the value of Height: ";
    cin>>height;
    cout<<"Enter the value of Length: ";
    cin>>length;
    parallelogram_force=weightForce*height/length;
    cout<<"Your value of Friction Force dynamic is "<<parallelogram_force<<endl;
    break;
    case 'l':
    cout<<"Enter the value of Weight force: ";
    cin>>weightForce;
    cout<<"Enter the value of Parallelogram force: ";
    cin>>parallelogram_force;
    pressing_force = sqrt(pow(weightForce, 2)-pow(parallelogram_force, 2));
    cout<<"Your value of Pressing force is "<<pressing_force<<" N"<<endl;
    break;
    case 'm':
    cout<<"The value of Binding Force is equal to -Pressing force, select [l] to calculate Pressing force"<<endl;
    break;
    case 'n':
    cout<<"The value of Balancing Force is equal to Parallelogram force, select [k] to calculate Parallelogram force"<<endl;
    break;
    case 'o':
    cout<<"Enter the value of Base: ";
    cin>>base;
    cout<<"Enter the value of Height: ";
    cin>>height;
    length=pow(base, 2)+pow(height, 2);
    cout<<"Your value of Length of triangle is "<<length<<"^2"<<endl;
    break;
    case 'p':
    cout<<"Enter the value of Length: ";
    cin>>length;
    cout<<"Enter the value of Height: ";
    cin>>height;
    base = sqrt(pow(length, 2)-pow(height, 2));
    cout<<"Your value of Base is "<<base<<endl;
    break;
    case 'q':
    cout<<"Enter the value of Height: ";
    cin>>height;
    cout<<"Enter the value of base: ";
    cin>>base;
    length = sqrt(pow(height, 2)+pow(base, 2));
    cout<<"Your value of Length is "<<length<<endl;
    break;
    default:
        cout<<"Try again!, there have some error maybe..."<<'\n';
        break;
    }
    cout<<"--------- Thanks for using CC ----------"<<'\n';
    return 0;
}