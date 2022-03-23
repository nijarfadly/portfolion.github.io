#include <iostream.h>

void main()

{ float biaya;
    cout<<"Masukan total belanja= ";
    cin>>biaya;
    if (biaya>=50000)
        biaya=biaya-(biaya*0.20);
    else
        biaya=biaya-(biaya*0.20);
        cout<<"Total bayar = "<<biaya<<endl;
}