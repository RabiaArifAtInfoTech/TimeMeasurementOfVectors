#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

int main() {

    clock_t start, end;
    double diff;

    start = clock();

    //Code for which the time is to be calculated

    vector<int> vect1(3);


    int j = 1;

    do
    {
        //cout << "no." << j << endl;
       // cout << "For vector[3]: " << j << endl;
        vect1.push_back(j);
        // cout << vect1.capacity() << ' ' << vect1.size() << endl;
        j++;
    } while (j != 100000);
    //cout << vect1.capacity() << ' ' << vect1.size() << endl;

    //code is over

    end = clock();

    //CLOCKS_PER_SECOND : the number of clock ticks per second
    cout << "Starting Time:" << start;
    cout << "\nEnding Time:" << end;
    cout << " \nCLOCKS_PER_SEC:" << CLOCKS_PER_SEC;
    cout << "\nNumber of clock ticks:" << end - start;
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "\nTotal Time taken for vector(3): : " << fixed
        << time_taken;
    cout << " sec " << endl;
    cout << endl << endl;



    clock_t start1, end1;
    double diff1;

    start1 = clock();

    //Code for which the time is to be calculated

    vector<int> vect(1000);
    //cout << vect1.capacity() << ' ' << vect1.size() << endl;
    /*vect1.push_back(1);
    vect1.push_back(2);
    vect1.push_back(3);*/
    // cout << vect1.capacity() << ' ' << vect1.size() << endl;

    int i = 1;

    do
    {
        //cout << "no." << j << endl;
       // cout << "For vector[3]: " << j << endl;
        vect.push_back(j);
        // cout << vect1.capacity() << ' ' << vect1.size() << endl;
        i++;
    } while (i != 100000);
    //cout << vect1.capacity() << ' ' << vect1.size() << endl;

//code is over

    end1 = clock();
    //CLOCKS_PER_SECOND : the number of clock ticks per second
    cout << "Starting Time:" << start1;
    cout << "\nEnding Time:" << end1;
    cout << " \nCLOCKS_PER_SEC:" << CLOCKS_PER_SEC;
    cout << "\nNumber of clock ticks:" << end1 - start1;
    cout << "\nTotal Time for vector(1000): " << ((double)(end1 - start1) / (double)CLOCKS_PER_SEC);
    cout << "\n\n\n";
    return 0;
}
