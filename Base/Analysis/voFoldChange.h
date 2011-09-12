/*=========================================================================

  Program: Visomics

  Copyright (c) Kitware, Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=========================================================================*/

#ifndef __voFoldChange_h
#define __voFoldChange_h

// Qt includes
#include <QScopedPointer>

// Visomics includes
#include "voAnalysis.h"

class voFoldChangePrivate;

class voFoldChange : public voAnalysis
{
  Q_OBJECT
public:
  typedef voAnalysis Superclass;
  voFoldChange();
  virtual ~voFoldChange();

protected:
  virtual void setInputInformation();
  virtual void setOutputInformation();
  virtual void setParameterInformation();
  virtual QString parameterDescription()const;

  virtual bool execute();

protected:
  QScopedPointer<voFoldChangePrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(voFoldChange);
  Q_DISABLE_COPY(voFoldChange);
};

#endif
