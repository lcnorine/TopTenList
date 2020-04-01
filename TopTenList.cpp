//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  if (index >= 0 && index < _list.size())
  {
    _list.at(index) = link;
  }
  else
  {
    std::cerr << index << "is not between 0 and 9.";
  }
}

Hyperlink TopTenList::get(int index)
{
  if (index >= 0 && index < _list.size())
  {
    return _list.at(index);
  }
  else
  {
    std::cerr << index << "is not between 0 and 9.";
  }
}

void TopTenList::display_forward()
{
  std::cout<<"Top Ten List\n";
  for (int i = 0; i < _list.size(); i++)
  {
    std::cout << i + 1 << " of " << _list.size() << ": " << _list.at(i).url << "\n";
  }
}

void TopTenList::display_backward()
{
  std::cout<<"Top Ten List\n";
  for (int i = _list.size() - 1; i >= 0; i++)
  {
    std::cout << i + 1 << " of " << _list.size() << ": " << _list.at(i).url << "\n";
  }
}
