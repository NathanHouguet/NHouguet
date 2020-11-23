#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <vector>

class Rectangle : public Figure {
public:
  Rectangle(const int width, const int height);
  ~Rectangle();

  void save(std::string filename);

private:
  void clearImage();
  void createTestImage();

private:
  const int width;
  const int height;

  std::vector<char> image;
};

#endif /* RECTANGLE_H */