#include <iostream>
#include <random>
#include <chrono>
#include <vector>

using namespace std;

class Rand_int {
public:
    Rand_int(double mean, double stddev) : 
        dist{mean, stddev}, 
        re{(long unsigned) chrono::system_clock::now().time_since_epoch().count()} { }
    double operator() () {return dist(re);}    //draw an int

private:
    default_random_engine re;
    normal_distribution<double> dist;
};

int main()
{
    Rand_int rnd {14.5, 3.0};  // make a normal distribution random number generator
    
    vector<int> histogram(30);
    
    for(int i = 0; i != 200; ++i)
    {
        ++histogram[round(rnd())]; //fill histogram with the frequencies of numbers [0:29]
    }
    
    // write the histogram bar graph to cout
    for (int i = 0; i != histogram.size(); ++i)
    {
        cout << i << '\t';
        for (int j = 0; j != histogram[i]; ++j)
        {
            cout << '*';
        }
        cout << endl;
    }
}
