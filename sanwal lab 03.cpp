
//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename T>
//class AbstractQueue {
//public:
//    virtual void enQueue(T value) = 0;
//    virtual T deQueue() = 0;
//    virtual T front() const = 0;
//    virtual bool isEmpty() const = 0;
//    virtual bool isFull() const = 0;
//    virtual ~AbstractQueue() {}
//};
//
//template <typename T>
//class myQueue : public AbstractQueue<T> {
//private:
//    T* arr;
//    int size, count, f, r;
//
//public:
//    myQueue(int s) {
//        size = s;
//        arr = new T[size];
//        count = 0;
//        f = 0;
//        r = -1;
//    }
//
//    void enQueue(T value) {
//        if (isFull()) {
//            cout << "Queue is Full!\n";
//            return;
//        }
//
//        r = (r + 1) % size;
//        arr[r] = value;
//        count++;
//
//        cout << "Element inserted successfully.\n";
//    }
//
//    T deQueue() {
//        if (isEmpty()) {
//            cout << "Queue is Empty!\n";
//            return T();
//        }
//
//        T value = arr[f];
//        f = (f + 1) % size;
//        count--;
//
//        return value;
//    }
//
//    T front() const {
//        if (isEmpty())
//            return T();
//
//        return arr[f];
//    }
//
//    bool isEmpty() const {
//        return count == 0;
//    }
//
//    bool isFull() const {
//        return count == size;
//    }
//
//    void display() const {
//        if (isEmpty()) {
//            cout << "Queue is Empty!\n";
//            return;
//        }
//
//        for (int i = 0; i < count; i++)
//            cout << arr[(f + i) % size] << " ";
//
//        cout << endl;
//    }
//
//    ~myQueue() {
//        delete[] arr;
//    }
//};
//
//int main() {
//    int size, choice, value;
//
//    cout << "Enter Queue Size: ";
//    cin >> size;
//
//    if (size <= 0) {
//        cout << "Invalid size!\n";
//        return 0;
//    }
//
//    myQueue<int> q(size);
//
//    do {
//        cout << "\n1. Enqueue\n2. Dequeue\n3. Front\n";
//        cout << "4. Display\n5. Empty\n6. Full\n0. Exit\n";
//        cout << "Enter Choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter Value: ";
//            cin >> value;
//            q.enQueue(value);
//            break;
//
//        case 2:
//            if (!q.isEmpty())
//                cout << "Removed: " << q.deQueue() << endl;
//            else
//                cout << "Queue is Empty!\n";
//            break;
//
//        case 3:
//            if (!q.isEmpty())
//                cout << "Front: " << q.front() << endl;
//            else
//                cout << "Queue is Empty!\n";
//            break;
//
//        case 4:
//            q.display();
//            break;
//
//        case 5:
//            cout << (q.isEmpty() ? "Queue is Empty\n" : "Not Empty\n");
//            break;
//
//        case 6:
//            cout << (q.isFull() ? "Queue is Full\n" : "Not Full\n");
//            break;
//
//        case 0:
//            cout << "Exit\n";
//            break;
//
//        default:
//            cout << "Invalid Choice!\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}








                // TASK 02

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Queue {
//private:
//    int s1[100], s2[100];
//    int top1, top2;
//
//    void transfer() {
//        if (top2 == -1) {
//            while (top1 != -1) {
//                s2[++top2] = s1[top1--];
//            }
//        }
//    }
//
//public:
//    Queue() {
//        top1 = -1;
//        top2 = -1;
//    }
//
//    void enqueue(int value) {
//        if (top1 == 99) {
//            cout << "Queue capacity reached!\n";
//            return;
//        }
//
//        s1[++top1] = value;
//        cout << "Inserted successfully.\n";
//    }
//
//    int dequeue() {
//        transfer();
//
//        if (top2 == -1) {
//            cout << "Queue is Empty!\n";
//            return -1;
//        }
//
//        return s2[top2--];
//    }
//
//    int front() {
//        transfer();
//
//        if (top2 == -1)
//            return -1;
//
//        return s2[top2];
//    }
//
//    bool isEmpty() {
//        return top1 == -1 && top2 == -1;
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is Empty!\n";
//            return;
//        }
//
//        cout << "Queue: ";
//
//        for (int i = top2; i >= 0; i--)
//            cout << s2[i] << " ";
//
//        for (int i = 0; i <= top1; i++)
//            cout << s1[i] << " ";
//
//        cout << endl;
//    }
//};
//
//int main() {
//    Queue q;
//    int choice, value;
//
//    do {
//        cout << "\n1. Enqueue\n2. Dequeue\n3. Front\n";
//        cout << "4. Display\n0. Exit\n";
//        cout << "Enter Choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter Value: ";
//            cin >> value;
//            q.enqueue(value);
//            break;
//
//        case 2:
//            if (!q.isEmpty())
//                cout << "Removed: " << q.dequeue() << endl;
//            else
//                cout << "Queue is Empty!\n";
//            break;
//
//        case 3:
//            if (!q.isEmpty())
//                cout << "Front: " << q.front() << endl;
//            else
//                cout << "Queue is Empty!\n";
//            break;
//
//        case 4:
//            q.display();
//            break;
//
//        case 0:
//            cout << "Exit\n";
//            break;
//
//        default:
//            cout << "Invalid Choice!\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}



                      // TASK 03

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Queue {
//private:
//    int arr[100];
//    int f, r, count;
//
//public:
//    Queue() {
//        f = 0;
//        r = -1;
//        count = 0;
//    }
//
//    void enqueue(int value) {
//        if (count == 100) {
//            cout << "Queue Full!\n";
//            return;
//        }
//
//        r = (r + 1) % 100;
//        arr[r] = value;
//        count++;
//    }
//
//    int dequeue() {
//        if (isEmpty())
//            return -1;
//
//        int value = arr[f];
//        f = (f + 1) % 100;
//        count--;
//
//        return value;
//    }
//
//    int front() {
//        if (isEmpty())
//            return -1;
//
//        return arr[f];
//    }
//
//    bool isEmpty() {
//        return count == 0;
//    }
//
//    int size() {
//        return count;
//    }
//
//    void display() {
//        for (int i = 0; i < count; i++)
//            cout << arr[(f + i) % 100] << " ";
//
//        cout << endl;
//    }
//};
//
//void reverseFirstK(Queue& q, int k) {
//    int n = q.size();
//
//    if (k < 0) {
//        cout << "Invalid K!\n";
//        return;
//    }
//
//    if (k > n)
//        k = n;
//
//    if (k <= 1)
//        return;
//
//    int s[100];
//    int top = -1;
//
//    for (int i = 0; i < k; i++)
//        s[++top] = q.dequeue();
//
//    while (top != -1)
//        q.enqueue(s[top--]);
//
//    for (int i = 0; i < n - k; i++)
//        q.enqueue(q.dequeue());
//}
//
//int main() {
//    Queue q;
//    int n, value, k;
//
//    cout << "Enter Number of Elements: ";
//    cin >> n;
//
//    if (n < 0 || n > 100) {
//        cout << "Invalid size!\n";
//        return 0;
//    }
//
//    cout << "Enter Elements:\n";
//
//    for (int i = 0; i < n; i++) {
//        cin >> value;
//        q.enqueue(value);
//    }
//
//    cout << "Original Queue: ";
//    q.display();
//
//    cout << "Enter K: ";
//    cin >> k;
//
//    reverseFirstK(q, k);
//
//    cout << "Reversed Queue: ";
//    q.display();
//
//    return 0;
//}


  // TASK 04

//#include <iostream>
//#include <string>
//using namespace std;
//
//class TicketSystem {
//private:
//    int tickets[100];
//    int f, r, count;
//
//public:
//    TicketSystem() {
//        f = 0;
//        r = -1;
//        count = 0;
//    }
//
//    void enqueue(int id) {
//        if (id < 1000 || id > 9999) {
//            cout << "Enter a 4-digit ID!\n";
//            return;
//        }
//
//        if (count == 100) {
//            cout << "Queue is Full!\n";
//            return;
//        }
//
//        for (int i = 0; i < count; i++) {
//            if (tickets[(f + i) % 100] == id) {
//                cout << "Ticket already exists!\n";
//                return;
//            }
//        }
//
//        r = (r + 1) % 100;
//        tickets[r] = id;
//        count++;
//
//        cout << "Ticket Added Successfully!\n";
//    }
//
//    void dequeue() {
//        if (count == 0) {
//            cout << "No Tickets Available!\n";
//            return;
//        }
//
//        cout << "Ticket " << tickets[f] << " Resolved!\n";
//
//        f = (f + 1) % 100;
//        count--;
//    }
//
//    void front() {
//        if (count == 0) {
//            cout << "No Pending Tickets!\n";
//            return;
//        }
//
//        cout << "Next Ticket: " << tickets[f] << endl;
//    }
//
//    void display() {
//        if (count == 0) {
//            cout << "No Pending Tickets!\n";
//            return;
//        }
//
//        cout << "Pending Tickets: ";
//
//        for (int i = 0; i < count; i++)
//            cout << tickets[(f + i) % 100] << " ";
//
//        cout << endl;
//    }
//};
//
//int main() {
//    TicketSystem t;
//    int choice, id;
//
//    do {
//        cout << "\n1. Add Ticket\n2. Resolve Ticket\n";
//        cout << "3. Next Ticket\n4. Display Tickets\n0. Exit\n";
//        cout << "Enter Choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter Ticket ID: ";
//            cin >> id;
//            t.enqueue(id);
//            break;
//
//        case 2:
//            t.dequeue();
//            break;
//
//        case 3:
//            t.front();
//            break;
//
//        case 4:
//            t.display();
//            break;
//
//        case 0:
//            cout << "Exit\n";
//            break;
//
//        default:
//            cout << "Invalid Choice!\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}

            // TASK 05


//#include <iostream>
//#include <string>
//using namespace std;
//
//class PrinterQueue {
//private:
//    string documents[100];
//    int f, r, count;
//
//public:
//    PrinterQueue() {
//        f = 0;
//        r = -1;
//        count = 0;
//    }
//
//    void enqueue(string name) {
//        if (count == 100) {
//            cout << "Print Queue is Full!\n";
//            return;
//        }
//
//        if (name == "") {
//            cout << "Invalid Document Name!\n";
//            return;
//        }
//
//        r = (r + 1) % 100;
//        documents[r] = name;
//        count++;
//
//        cout << "Document Added Successfully!\n";
//    }
//
//    void dequeue() {
//        if (count == 0) {
//            cout << "No Documents to Print!\n";
//            return;
//        }
//
//        cout << "Printing: " << documents[f] << endl;
//
//        f = (f + 1) % 100;
//        count--;
//    }
//
//    void front() {
//        if (count == 0) {
//            cout << "Print Queue is Empty!\n";
//            return;
//        }
//
//        cout << "Next Document: " << documents[f] << endl;
//    }
//
//    void display() {
//        if (count == 0) {
//            cout << "No Pending Documents!\n";
//            return;
//        }
//
//        cout << "Print Queue:\n";
//
//        for (int i = 0; i < count; i++)
//            cout << documents[(f + i) % 100] << endl;
//    }
//};
//
//int main() {
//    PrinterQueue p;
//    int choice;
//    string name;
//
//    do {
//        cout << "\n1. Add Print Job\n2. Print Document\n";
//        cout << "3. Front Document\n4. Display Queue\n0. Exit\n";
//        cout << "Enter Choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter Document Name: ";
//            cin >> name;
//            p.enqueue(name);
//            break;
//
//        case 2:
//            p.dequeue();
//            break;
//
//        case 3:
//            p.front();
//            break;
//
//        case 4:
//            p.display();
//            break;
//
//        case 0:
//            cout << "Exit\n";
//            break;
//
//        default:
//            cout << "Invalid Choice!\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}



 // TASK 06

//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Package {
//    int id;
//    string address;
//    int startTime;
//    int endTime;
//};
//
//class DeliverySystem {
//private:
//    Package packages[100];
//    Package expired[100];
//
//    int f, r, count;
//    int expiredCount;
//
//    int convertTime(string t) {
//        int h = (t[0] - '0') * 10 + (t[1] - '0');
//        int m = (t[3] - '0') * 10 + (t[4] - '0');
//
//        return h * 60 + m;
//    }
//
//    bool validTime(string t) {
//        if (t.length() != 5 || t[2] != ':')
//            return false;
//
//        if (t[0] < '0' || t[0] > '9' ||
//            t[1] < '0' || t[1] > '9' ||
//            t[3] < '0' || t[3] > '9' ||
//            t[4] < '0' || t[4] > '9')
//            return false;
//
//        int h = (t[0] - '0') * 10 + (t[1] - '0');
//        int m = (t[3] - '0') * 10 + (t[4] - '0');
//
//        return h >= 0 && h <= 23 &&
//            m >= 0 && m <= 59;
//    }
//
//    void removeExpired(int now) {
//        while (count > 0 &&
//            now > packages[f].endTime) {
//
//            cout << "Package " << packages[f].id
//                << " Expired!\n";
//
//            if (expiredCount < 100)
//                expired[expiredCount++] = packages[f];
//
//            f = (f + 1) % 100;
//            count--;
//        }
//    }
//
//public:
//    DeliverySystem() {
//        f = 0;
//        r = -1;
//        count = 0;
//        expiredCount = 0;
//    }
//
//    void enqueue(int id, string address,
//        string start, string end) {
//
//        if (id <= 0 || address == "") {
//            cout << "Invalid Package Details!\n";
//            return;
//        }
//
//        if (!validTime(start) || !validTime(end)) {
//            cout << "Invalid Time! Use HH:MM.\n";
//            return;
//        }
//
//        int s = convertTime(start);
//        int e = convertTime(end);
//
//        if (s >= e) {
//            cout << "Invalid Time Window!\n";
//            return;
//        }
//
//        if (count == 100) {
//            cout << "Queue is Full!\n";
//            return;
//        }
//
//        for (int i = 0; i < count; i++) {
//            if (packages[(f + i) % 100].id == id) {
//                cout << "Package ID Already Exists!\n";
//                return;
//            }
//        }
//
//        for (int i = 0; i < expiredCount; i++) {
//            if (expired[i].id == id) {
//                cout << "Package ID Already Exists!\n";
//                return;
//            }
//        }
//
//        r = (r + 1) % 100;
//
//        packages[r].id = id;
//        packages[r].address = address;
//        packages[r].startTime = s;
//        packages[r].endTime = e;
//
//        count++;
//
//        cout << "Package Added Successfully!\n";
//    }
//
//    void front() {
//        if (count == 0) {
//            cout << "No Packages Available!\n";
//            return;
//        }
//
//        cout << "Package ID: " << packages[f].id << endl;
//        cout << "Address: " << packages[f].address << endl;
//        cout << "Start Time: " << packages[f].startTime / 60
//            << ":" << packages[f].startTime % 60 << endl;
//        cout << "End Time: " << packages[f].endTime / 60
//            << ":" << packages[f].endTime % 60 << endl;
//    }
//
//    void display() {
//        if (count == 0) {
//            cout << "No Pending Packages!\n";
//            return;
//        }
//
//        for (int i = 0; i < count; i++) {
//            Package p = packages[(f + i) % 100];
//
//            cout << "\nPackage ID: " << p.id << endl;
//            cout << "Address: " << p.address << endl;
//
//            cout << "Time Window: "
//                << p.startTime / 60 << ":"
//                << p.startTime % 60 << " - "
//                << p.endTime / 60 << ":"
//                << p.endTime % 60 << endl;
//        }
//    }
//
//    void timeToDeliver(string time) {
//        if (!validTime(time)) {
//            cout << "Invalid Time!\n";
//            return;
//        }
//
//        int now = convertTime(time);
//
//        removeExpired(now);
//
//        if (count == 0) {
//            cout << "No Packages Available!\n";
//            return;
//        }
//
//        if (now < packages[f].startTime) {
//            cout << "Package is Not Ready Yet!\n";
//        }
//        else {
//            cout << "Package Can Be Delivered Now!\n";
//        }
//    }
//
//    void dequeue(string time) {
//        if (!validTime(time)) {
//            cout << "Invalid Time!\n";
//            return;
//        }
//
//        int now = convertTime(time);
//
//        removeExpired(now);
//
//        if (count == 0)
//            return;
//
//        if (now < packages[f].startTime) {
//            cout << "Package is Not Ready Yet!\n";
//            return;
//        }
//
//        cout << "Package " << packages[f].id
//            << " Delivered Successfully!\n";
//
//        f = (f + 1) % 100;
//        count--;
//    }
//
//    void displayExpired() {
//        if (expiredCount == 0) {
//            cout << "No Expired Packages!\n";
//            return;
//        }
//
//        for (int i = 0; i < expiredCount; i++)
//            cout << "Expired Package ID: "
//            << expired[i].id << endl;
//    }
//};
//
//int main() {
//    DeliverySystem d;
//
//    int choice, id;
//    string address, start, end, time;
//
//    do {
//        cout << "\n===== PACKAGE DELIVERY SYSTEM =====\n";
//        cout << "1. Add Package\n";
//        cout << "2. Deliver Package\n";
//        cout << "3. Front Package\n";
//        cout << "4. Display Packages\n";
//        cout << "5. Check Delivery Time\n";
//        cout << "6. Display Expired Packages\n";
//        cout << "0. Exit\n";
//
//        cout << "Enter Choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter Package ID: ";
//            cin >> id;
//
//            cout << "Enter Address: ";
//            cin.ignore();
//            getline(cin, address);
//
//            cout << "Enter Start Time (HH:MM): ";
//            cin >> start;
//
//            cout << "Enter End Time (HH:MM): ";
//            cin >> end;
//
//            d.enqueue(id, address, start, end);
//            break;
//
//        case 2:
//            cout << "Enter Current Time (HH:MM): ";
//            cin >> time;
//            d.dequeue(time);
//            break;
//
//        case 3:
//            d.front();
//            break;
//
//        case 4:
//            d.display();
//            break;
//
//        case 5:
//            cout << "Enter Current Time (HH:MM): ";
//            cin >> time;
//            d.timeToDeliver(time);
//            break;
//
//        case 6:
//            d.displayExpired();
//            break;
//
//        case 0:
//            cout << "Program Ended!\n";
//            break;
//
//        default:
//            cout << "Invalid Choice!\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}

