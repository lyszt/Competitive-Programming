    // g++ -std=c++11 -O2 -Wall test.cpp -o test

    #include <iostream>
    #include <vector>

    int main() {
        using namespace std;
        int a,b;
        int x,y;
        while(cin >> a >> b)
        {
            if(a == 0 && b == 0){break;}
            vector points(2,0);
            for(int i = 0; i <= a + b; i++) {
                if(a <= i) {
                    cin >> x;
                }
                if(b <= i) {
                    cin >> y;
                }
                if(x > y) {
                    points[0] += 1;
                } else if(x < y) {
                    points[1] += 1;
                }

            }
            cout << points[0] << " " << points[1] << endl;
        }
    }









