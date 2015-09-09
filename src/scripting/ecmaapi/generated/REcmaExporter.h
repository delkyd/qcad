// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAEXPORTER_H
        #define RECMAEXPORTER_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RExporter.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaExporter {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        getErrorMessage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLayerSource
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBlockSource
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProjectionRenderingHint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProjectionRenderingHint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBrush
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBrush
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEntityAttributes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStyle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBrushStyle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDashPattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLinetypePattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypePattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockRefOrEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentBlockRef
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isEntitySelected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        startExport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        endExport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportDocumentSettings
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportDocumentSetting
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportLayers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportViews
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportLinetypes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportLinetype
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        startEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        endEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportCurrentEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unexportEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportShapeSegment
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportLine
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportLineSegment
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportXLine
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportRay
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportCircle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportArc
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportArcSegment
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEllipse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportPolyline
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportSpline
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportSplineSegment
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportPainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportBoundingBoxPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportImage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportQuad
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportVerticalQuad
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportTriangle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportRectangle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLineTypePatternScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEntityStack
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDraftMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toggleDraftMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDraftMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTwoColorSelectedMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTwoColorSelectedMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setScreenBasedLinetypes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toggleScreenBasedLinetypes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScreenBasedLinetypes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isVisualExporter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVisualExporter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPixelSizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPixelSizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RExporter* getSelf(const QString& fName, QScriptContext* context)
    ;static RExporter* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    