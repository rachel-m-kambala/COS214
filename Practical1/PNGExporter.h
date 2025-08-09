#ifndef PNGEXPORTER_H
#define PNGEXPORTER_H

#include "ExportCanvas.h"

class PNGExporter : public ExportCanvas {
public:
    PNGExporter(Canvas* c) : ExportCanvas(c) {}
    ~PNGExporter() {}

private:
    void saveToFile() override;

protected:
    void prepareCanvas() override;
    void renderElements() override;
};

#endif // PNGEXPORTER_H
