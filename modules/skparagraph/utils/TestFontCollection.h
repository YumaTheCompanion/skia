// Copyright 2019 Google LLC.
#include "modules/skparagraph/include/FontCollection.h"

namespace skia {
namespace textlayout {
class TestFontCollection : public FontCollection {
public:
    TestFontCollection(const std::string& resourceDir);
    ~TestFontCollection() = default;

    size_t fontsFound() const { return fFontsFound; }

private:
    std::string fResourceDir;
    size_t fFontsFound;
};
}  // namespace textlayout
}  // namespace skia