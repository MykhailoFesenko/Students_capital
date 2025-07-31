#include <bits/stdc++.h>

using namespace std;

int main(){
    int K,N;
    long long C;
    cout << "Enter K,N,C: ";
    cin >> K >> N >> C;

    vector<pair<long long,long long>> laptop(K);//(price,gain)
    cout << "\nEnter K numbers for gains array: ";
    for(int i=0;i<K;i++)
        cin >> laptop[i].second;//gains
    cout << "\nEnter K numbers for price array: ";
    for(int i=0;i<K;i++)
        cin >> laptop[i].first;//price

    //sort by price
    sort(laptop.begin(),laptop.end());

    //sorted by gain heap
    priority_queue<long long> pq;
    int k = 0;

    for(int n=0;n<N;n++){//fixing N laptops
        while((k<K)&&(laptop[k].first<=C)){//add all laptop we can afford
            pq.push(laptop[k].second);
            k++;
        }
        if(pq.empty())
            break;
        long long gain = pq.top();
        if(gain<0)
            break;
        C += gain;//fixing it and selling
        pq.pop();
    }

    cout << "\nCapital at the end of the summer: " << C;
}
