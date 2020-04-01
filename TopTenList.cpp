//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list.at(index) = link;
}

Hyperlink TopTenList::get(int index)
{
  return _list.at(index);
}

void display_forward()
{
  for (int i = 0; i < _list.size(); i++)
  {
    std::cout << _list.at(i);
  }
}
void display_backward()
{
  for (int i = _list.size() - 1; i >= 0 ; i++)
  {
    std::cout << _list.at(i);
  }
}
