//
//  main.cpp
//  gugudan
//
//  Created by toispre on 2020/10/16.
//  Copyright © 2020 toispre. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    for (int i = 2; i < 9; i++)
    {
        for (int j = 1; j < 9; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}
