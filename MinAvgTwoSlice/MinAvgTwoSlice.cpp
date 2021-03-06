// MinAvgTwoSlice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &B)
{
    vector<long> A(B.size(),0);
    for (int i = 0; i < B.size(); ++i)
        A[i] = B[i];

    double min = (A[0] + A[1])/2;
    double dummy = 0;
    int minIdx = 0;
    for (int i = 0; i < A.size() - 2; ++i)
    {
        if (min > ((A[i] + A[i + 1]) / 2.))
        {
            min = (A[i] + A[i + 1]) / 2.;
            minIdx = i;
        }
        if (min > ((A[i] + A[i + 1] + A[i + 2]) / 3.))
        {
            min = ((A[i] + A[i + 1] + A[i + 2]) / 3.);
            minIdx = i;
        }
    }
    if (min > ((A[A.size() - 1] + A[A.size() - 2]) / 2.))
    {
        return A.size() - 2;
    }
    return minIdx;
}
int main()
{
    //vector<int> A = { 4,2,2,5,1,5,8 };
    vector<int> A = { 10, 10, -1, 2, 4, -1, 2, -1 };
    cout << solution(A) << endl;
    return 0;
}

