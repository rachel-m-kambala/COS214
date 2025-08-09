#ifndef PDFEXPORTER_H
#define PDFEXPORTER_H

#include "ExportCanvas.h"

class PDFExporter : public ExportCanvas {
public:
    PDFExporter(Canvas* c) : ExportCanvas(c) {}
    ~PDFExporter() {}

private:
    void saveToFile() override;

protected:
    void prepareCanvas() override;
    void renderElements() override;
};

#endif // PDFEXPORTER_H
