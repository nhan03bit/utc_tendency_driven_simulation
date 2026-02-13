// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/base_frame.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_base_frame_h
#define _sawIntuitiveResearchKit_base_frame_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */



// for mts-proxy 
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>

/* source line: 1 */
/* source line: 4 */

#include <cisstVector/vctTransformationTypes.h>
// Always include last
#include <sawIntuitiveResearchKit/sawIntuitiveResearchKitExport.h>

// Following needed on Windows
#ifdef interface
#undef interface
#endif

/* source line: 15 */
namespace dvrk {
class CISST_EXPORT base_frame
{
 /* default constructors and destructors. */
 public:
    base_frame(void);
    base_frame(const base_frame & other);
    base_frame & operator = (const base_frame & other);
    ~base_frame();

/* source line: 21 */
 public:
    std::string reference_frame; // reference_frame
/* source line: 28 */
 public:
    vctFrm4x4 transform; // transform
/* source line: 37 */
 public:
    std::string component; // component
/* source line: 44 */
 public:
    std::string interface; // interface
/* source line: 51 */


        inline bool valid(void) const {
            return (// fixed frame
                    ((reference_frame != "") && (transform != vctFrm4x4::Identity())
                     && (interface == "") && (component == ""))
                    // component
                    || ((reference_frame == "") && (transform == vctFrm4x4::Identity())
                        && (interface != "") && (component != ""))
                    // undefined
                    || ((reference_frame == "") && (transform == vctFrm4x4::Identity())
                        && (interface == "") && (component == ""))
                    );
        }
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const base_frame & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // base_frame
}; // end of namespace dvrk

// mts-proxy set to true
typedef mtsGenericObjectProxy<dvrk::base_frame> dvrk_base_frameProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(dvrk_base_frameProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const dvrk::base_frame & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, dvrk::base_frame & placeHolder);
/* data functions */
template <> class cmnData<dvrk::base_frame > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef dvrk::base_frame DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const dvrk::base_frame & data) {
    outputStream << cmnData<dvrk::base_frame >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<dvrk::base_frame >::SerializeText(const dvrk::base_frame & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<dvrk::base_frame >::DeSerializeText(dvrk::base_frame & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_base_frame_h
