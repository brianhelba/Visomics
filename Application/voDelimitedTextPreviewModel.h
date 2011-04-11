
#ifndef __voDelimitedTextPreviewModel_h
#define __voDelimitedTextPreviewModel_h

// Qt includes
#include <QStandardItemModel>
#include <QString>

// Macros - TODO: find a way to import and include ctkPimpl.h

class voDelimitedTextPreviewModelPrivate;

class voDelimitedTextPreviewModel : public QStandardItemModel
{
  Q_OBJECT

public:
  typedef QStandardItemModel Superclass;
  voDelimitedTextPreviewModel(QObject* newParent = 0);
  virtual ~voDelimitedTextPreviewModel();

  QString fileName() const;
  void setFileName(const QString& newFileName);

  char fieldDelimiter() const;
  void setFieldDelimiter(char delimiter);

  char stringDelimiter() const;
  void setStringDelimiter(char character); // Value of 0 indicates none

//  bool useFirstLineAsAttributeNames() const;

  bool transpose() const;

  int numberOfColumnMetaDataTypes() const;

  int numberOfRowMetaDataTypes() const;

  int numberOfRowsToPreview() const;
  void setNumberOfRowsToPreview(int count);

  bool inlineUpdate() const;
  void setInlineUpdate(bool value);

public slots:

//  void setUseFirstLineAsAttributeNames(bool _arg);

  void setTranspose(bool value);

  void setNumberOfColumnMetaDataTypes(int _arg);

  void setNumberOfRowMetaDataTypes(int _arg);

  void updatePreview();

signals:
  void fileNameChanged(const QString& filename);

  void fieldDelimiterChanged(char delimiter);

  void inlineUpdateChanged(bool value);

  void numberOfColumnMetaDataTypesChanged(int value);

  void numberOfRowMetaDataTypesChanged(int value);

  void numberOfRowsToPreviewChanged(int count);

  void stringDelimiterChanged(char character);

  void transposeChanged(bool transpose);

private:
  QScopedPointer<voDelimitedTextPreviewModelPrivate> d_ptr;

  Q_DECLARE_PRIVATE(voDelimitedTextPreviewModel);
  Q_DISABLE_COPY(voDelimitedTextPreviewModel);
};

#endif

