// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstParameterTypes/code/../prmServoCartesian.cdg

#pragma once
#ifndef _cisstParameterTypes_prmServoCartesian_h
#define _cisstParameterTypes_prmServoCartesian_h

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

#include <cisstVector/vctFixedSizeVectorTypes.h>
#include <cisstVector/vctTransformationTypes.h>
#include <cisstMultiTask/mtsGenericObject.h>
#include <cisstParameterTypes/prmSetpointMode.h>

// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 14 */
class CISST_EXPORT prmServoCartesian: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmServoCartesian(void);
    prmServoCartesian(const prmServoCartesian & other);
    prmServoCartesian & operator = (const prmServoCartesian & other);
    ~prmServoCartesian();

/* source line: 24 */
 protected:
    vctFrm3 mTaskFrame; // TaskFrame
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetTaskFrame(vctFrm3 & placeHolder) const;
#endif
    inline  vctFrm3 GetTaskFrame(void) const {
        return mTaskFrame;
    }
     void SetTaskFrame(const vctFrm3 & newValue);
    /* accessors is set to: all */
     const vctFrm3 & TaskFrame(void) const;
     vctFrm3 & TaskFrame(void);
/* source line: 30 */
 protected:
    vctFrm3 mPosition; // Position
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetPosition(vctFrm3 & placeHolder) const;
#endif
    inline  vctFrm3 GetPosition(void) const {
        return mPosition;
    }
     void SetPosition(const vctFrm3 & newValue);
    /* accessors is set to: all */
     const vctFrm3 & Position(void) const;
     vctFrm3 & Position(void);
/* source line: 36 */
 protected:
    vct6 mVelocity; // Velocity
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetVelocity(vct6 & placeHolder) const;
#endif
    inline  vct6 GetVelocity(void) const {
        return mVelocity;
    }
     void SetVelocity(const vct6 & newValue);
    /* accessors is set to: all */
     const vct6 & Velocity(void) const;
     vct6 & Velocity(void);
/* source line: 42 */
 protected:
    vct6 mForce; // Force
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetForce(vct6 & placeHolder) const;
#endif
    inline  vct6 GetForce(void) const {
        return mForce;
    }
     void SetForce(const vct6 & newValue);
    /* accessors is set to: all */
     const vct6 & Force(void) const;
     vct6 & Force(void);
/* source line: 48 */
 protected:
    vctFixedSizeVector<prmSetpointMode, 6> mAxisMode; // AxisMode
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetAxisMode(vctFixedSizeVector<prmSetpointMode, 6> & placeHolder) const;
#endif
    inline  vctFixedSizeVector<prmSetpointMode, 6> GetAxisMode(void) const {
        return mAxisMode;
    }
     void SetAxisMode(const vctFixedSizeVector<prmSetpointMode, 6> & newValue);
    /* accessors is set to: all */
     const vctFixedSizeVector<prmSetpointMode, 6> & AxisMode(void) const;
     vctFixedSizeVector<prmSetpointMode, 6> & AxisMode(void);
/* source line: 54 */

    private:
        CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION, CMN_LOG_ALLOW_DEFAULT);
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const override;
    void DeSerializeRaw(std::istream & inputStream) override;
    void ToStream(std::ostream & outputStream) const override;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const override;
    /* default data methods */
 public:
    void Copy(const prmServoCartesian & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const override;
    size_t ScalarNumber(void) const override;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range) override;
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range) override;
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const override;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) override;
#endif // CISST_HAS_JSON

}; // prmServoCartesian

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmServoCartesian> prmServoCartesianProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmServoCartesianProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmServoCartesian & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmServoCartesian & placeHolder);
/* data functions */
template <> class cmnData<prmServoCartesian > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmServoCartesian DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmServoCartesian & data) {
    outputStream << cmnData<prmServoCartesian >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmServoCartesian >::SerializeText(const prmServoCartesian & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmServoCartesian >::DeSerializeText(prmServoCartesian & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 60 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmServoCartesian);


#endif // _cisstParameterTypes_prmServoCartesian_h
