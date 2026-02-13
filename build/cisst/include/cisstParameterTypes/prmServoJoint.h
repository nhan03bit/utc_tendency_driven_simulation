// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstParameterTypes/code/../prmServoJoint.cdg

#pragma once
#ifndef _cisstParameterTypes_prmServoJoint_h
#define _cisstParameterTypes_prmServoJoint_h

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
class CISST_EXPORT prmServoJoint: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmServoJoint(void);
    prmServoJoint(const prmServoJoint & other);
    prmServoJoint & operator = (const prmServoJoint & other);
    ~prmServoJoint();

/* source line: 24 */
 protected:
    std::vector<std::string> mName; // Name
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetName(std::vector<std::string> & placeHolder) const;
#endif
    inline  std::vector<std::string> GetName(void) const {
        return mName;
    }
     void SetName(const std::vector<std::string> & newValue);
    /* accessors is set to: all */
     const std::vector<std::string> & Name(void) const;
     std::vector<std::string> & Name(void);
/* source line: 30 */
 protected:
    std::vector<prmSetpointMode> mMode; // Mode
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetMode(std::vector<prmSetpointMode> & placeHolder) const;
#endif
    inline  std::vector<prmSetpointMode> GetMode(void) const {
        return mMode;
    }
     void SetMode(const std::vector<prmSetpointMode> & newValue);
    /* accessors is set to: all */
     const std::vector<prmSetpointMode> & Mode(void) const;
     std::vector<prmSetpointMode> & Mode(void);
/* source line: 36 */
 protected:
    vctDoubleVec mPosition; // Position
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetPosition(vctDoubleVec & placeHolder) const;
#endif
    inline  vctDoubleVec GetPosition(void) const {
        return mPosition;
    }
     void SetPosition(const vctDoubleVec & newValue);
    /* accessors is set to: all */
     const vctDoubleVec & Position(void) const;
     vctDoubleVec & Position(void);
/* source line: 42 */
 protected:
    vctDoubleVec mVelocity; // Velocity
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetVelocity(vctDoubleVec & placeHolder) const;
#endif
    inline  vctDoubleVec GetVelocity(void) const {
        return mVelocity;
    }
     void SetVelocity(const vctDoubleVec & newValue);
    /* accessors is set to: all */
     const vctDoubleVec & Velocity(void) const;
     vctDoubleVec & Velocity(void);
/* source line: 48 */
 protected:
    vctDoubleVec mEffort; // Effort
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetEffort(vctDoubleVec & placeHolder) const;
#endif
    inline  vctDoubleVec GetEffort(void) const {
        return mEffort;
    }
     void SetEffort(const vctDoubleVec & newValue);
    /* accessors is set to: all */
     const vctDoubleVec & Effort(void) const;
     vctDoubleVec & Effort(void);
/* source line: 54 */
 protected:
    vctDoubleMat mPositionProjection; // If size is 0, will be treated as if identity.
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetPositionProjection(vctDoubleMat & placeHolder) const;
#endif
    inline  vctDoubleMat GetPositionProjection(void) const {
        return mPositionProjection;
    }
     void SetPositionProjection(const vctDoubleMat & newValue);
    /* accessors is set to: all */
     const vctDoubleMat & PositionProjection(void) const;
     vctDoubleMat & PositionProjection(void);
/* source line: 61 */

    public:
        inline void SetSize(const size_t & size) {
            Name().resize(size);
            Mode().resize(size);
            Position().SetSize(size, 0.0);
            Velocity().SetSize(size, 0.0);
            Effort().SetSize(size, 0.0);
            PositionProjection().SetSize(size, size, 0.0);
        }
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
    void Copy(const prmServoJoint & source);
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

}; // prmServoJoint

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmServoJoint> prmServoJointProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmServoJointProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmServoJoint & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmServoJoint & placeHolder);
/* data functions */
template <> class cmnData<prmServoJoint > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmServoJoint DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmServoJoint & data) {
    outputStream << cmnData<prmServoJoint >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmServoJoint >::SerializeText(const prmServoJoint & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmServoJoint >::DeSerializeText(prmServoJoint & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 76 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmServoJoint);


#endif // _cisstParameterTypes_prmServoJoint_h
