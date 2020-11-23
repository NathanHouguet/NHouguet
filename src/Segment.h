#ifndef SEGMENT_H
#define SEGMENT_H

#include <string>
#include <vector>

class Segment {
public:
  Segment(const Point &a, const Point &b);
  ~Segment();

  void afficher() const;

private:
  Point org, ext;
};

#endif /* SEGMENT_H */


