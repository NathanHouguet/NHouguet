#ifndef CROIX_H
#define CROIX_H

#include <string>
#include <vector>

class Croix : public Figure {
public:
  Croix(const int width, const int height);
  ~Croix();

  void save(std::string filename);

private:
  void clearImage();
  void createTestImage();

private:
  const int width;
  const int height;

  std::vector<char> image;
};

#endif /* CROIX_H */