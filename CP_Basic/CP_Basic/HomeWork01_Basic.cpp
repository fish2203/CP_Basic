#include "IO.h"

void HomeWorkBasic01_10810() {
    int Count = 0;
    int BucketCount = 0;

    cin >> BucketCount;
    cin >> Count;

    int Bucket[101] = {0};

    int FirstBucket = 0;
    int LastBucket = 0;
    int BallNumber = 0;
    for (int i = 0; i < Count; i++) {
        cin >> FirstBucket;
        cin >> LastBucket;
        cin >> BallNumber;
        for (int j = FirstBucket; j <= LastBucket; j++) {
            Bucket[j] = BallNumber;
        }
    }

    for (int i = 1; i <= BucketCount; i++) {
        cout << Bucket[i] << ' ';
    }
}

void HomeWorkBasic02_10813() {
    int Count = 0;
    int BucketCount = 0;

    cin >> BucketCount;
    cin >> Count;

    int Bucket[101] = { 0 };

    for (int i = 0; i < 101; i++) {
        Bucket[i] = i;
    }

    int FirstBucket = 0;
    int LastBucket = 0;
    int Temp = 0;
    for (int i = 0; i < Count; i++) {
        cin >> FirstBucket;
        cin >> LastBucket;
        Temp = Bucket[FirstBucket];
        Bucket[FirstBucket] = Bucket[LastBucket];
        Bucket[LastBucket] = Temp;
    }

    for (int i = 1; i <= BucketCount; i++) {
        cout << Bucket[i] << ' ';
    }
}

void HomeWorkBasic03_5597() {
    int Student[30] = { 0 };

    int StudentNumber = 0;
    for (int i = 0; i < 28; i++) {
        cin >> StudentNumber;

        Student[StudentNumber - 1] = 1;
    }
    cout << endl;
    for (int i = 0; i < size(Student); i++) {
        if (Student[i] == 0) {
            cout << i + 1 << endl;
        }
    }
}

void HomeWorkBasic04_2480() {
    int First = 0;
    int Second = 0;
    int Third = 0;

    cin >> First >> Second >> Third;

    int Reward = 0;
    if (First == Second) {
        if (Second == Third) {
            Reward = 10000 + First * 1000;
        }
        else {
            Reward = 1000 + First * 100;
        }
    }
    else {
        if (Second == Third) {
            Reward = 1000 + Second * 100;
        }
        else {
            int Big = (First > Second) ? First : Second;
            Big = (Big > Third) ? Big : Third;
            Reward = Big * 100;
        }
    }
    cout << Reward << endl;
}