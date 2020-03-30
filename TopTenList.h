//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include "Hyperlink.h"
#include "Idirectionable.h"

using std::string;
using std::vector;

class TopTenList : IDirectionable
{
  private:
    vector _list;
  public:
    void set_at(int index, Hyperlink link);
    Hyperlink get(int index);
    void display_forward();
    void display_backward();
};

#endif
