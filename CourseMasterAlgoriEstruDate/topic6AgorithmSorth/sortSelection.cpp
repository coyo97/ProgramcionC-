#include<iostream>
#include<vector>
using namespace std;

int pos_main(const vector<int>& v, int left, int right){
  int pos = left;
  for(int i = left + 1; i <= right; i++ ){
    if(v[i] < v[pos])
      pos = i;
  }
  return pos;

}

void selectSort(vector<int>& v){
  int last = v.size() - 1;
  for(int i = 0; i < last; i++){
    int k = pos_main(v, i,last);
    swap(v[k], v[i]);
  }
}

int main(){

  int n;
  cin >> n;
  vector<int> california(n);
  for(int i = 0; i < n; i++){
    cin >> california[i];
  }
  cout << "El vector sin ordena es: " << endl;
  for(int j = 0; j < n; j++){
    cout <<california[j] << ' ';
  }

  cout << endl;
  selectSort(california);
  cout << "El vector ordenado es: " << endl;
  for(int k = 0; k < n; k++)
    cout <<california[k] << ' ';

  cout << endl;

}
