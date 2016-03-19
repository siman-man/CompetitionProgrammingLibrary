#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

struct Node {
  int eval;

  Node(int eval = 0){
    this->eval = eval;
  }

  bool operator <(const Node &e) const{
    return eval < e.eval;
  }    
};

const int BEAM_WIDTH = 10;

int eval_something(){
  return random() % 100;
}

int main(){
  int n = 10;
  vector<Node> current;
  current.push_back(Node(0));

  for(int i = 0; i < n; i++){
    vector<Node> candidates;

    for(auto node : current){
      for(int j = 0; j < 10; j++){
        Node cand;
        cand.eval = node.eval + eval_something();
        candidates.push_back(cand);
      }
    }

    sort(candidates.rbegin(), candidates.rend());
    if (candidates.size() > BEAM_WIDTH) {
      candidates.resize(BEAM_WIDTH);
    }
    current = move(candidates);
  }

  cout << current[0].eval << endl;

  return 0;
}
