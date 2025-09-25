#include <iostream>
using namespace std;

class Hospital {
private:
    int room_rate = 1000; // per day
public:
    int calculateBill(int days) {
        return days * room_rate;
    }
    int calculateBill(int days, int doctorFee) {
        return days * room_rate + doctorFee;
    }
    int calculateBill(int days, int doctorFee, int medicationCharges) {
        return days * room_rate + doctorFee + medicationCharges;
    }
};

int main() {
    Hospital h;
    cout << "Bill (only days): " << h.calculateBill(3) << endl;
    cout << "Bill (days + doctorFee): " << h.calculateBill(3, 2000) << endl;
    cout << "Bill (all included): " << h.calculateBill(3, 2000, 1500) << endl;
    return 0;
}