// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstParameterTypes/code/../prmStateCartesian.cdg

#pragma once
#ifndef _cisstParameterTypes_prmStateCartesian_h
#define _cisstParameterTypes_prmStateCartesian_h

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

// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 13 */
class CISST_EXPORT prmStateCartesian: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmStateCartesian(void);
    prmStateCartesian(const prmStateCartesian & other);
    prmStateCartesian & operator = (const prmStateCartesian & other);
    ~prmStateCartesian();

/* source line: 23 */
 protected:
    std::string mMovingFrame; // Name of moving frame
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetMovingFrame(std::string & placeHolder) const;
#endif
    inline  std::string GetMovingFrame(void) const {
        return mMovingFrame;
    }
     void SetMovingFrame(const std::string & newValue);
    /* accessors is set to: all */
     const std::string & MovingFrame(void) const;
     std::string & MovingFrame(void);
/* source line: 29 */
 protected:
    std::string mReferenceFrame; // Name of reference frame
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetReferenceFrame(std::string & placeHolder) const;
#endif
    inline  std::string GetReferenceFrame(void) const {
        return mReferenceFrame;
    }
     void SetReferenceFrame(const std::string & newValue);
    /* accessors is set to: all */
     const std::string & ReferenceFrame(void) const;
     std::string & ReferenceFrame(void);
/* source line: 35 */
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
/* source line: 41 */
 protected:
    bool mPositionIsValid; // Does the Position member carry valid data?
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetPositionIsValid(bool & placeHolder) const;
#endif
    inline  bool GetPositionIsValid(void) const {
        return mPositionIsValid;
    }
     void SetPositionIsValid(const bool & newValue);
    /* accessors is set to: all */
     const bool & PositionIsValid(void) const;
     bool & PositionIsValid(void);
/* source line: 48 */
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
/* source line: 54 */
 protected:
    bool mVelocityIsValid; // Does the Velocity member carry valid data?
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetVelocityIsValid(bool & placeHolder) const;
#endif
    inline  bool GetVelocityIsValid(void) const {
        return mVelocityIsValid;
    }
     void SetVelocityIsValid(const bool & newValue);
    /* accessors is set to: all */
     const bool & VelocityIsValid(void) const;
     bool & VelocityIsValid(void);
/* source line: 61 */
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
/* source line: 67 */
 protected:
    bool mForceIsValid; // Does the Force member carry valid data?
 public:
    /* accessors is set to: all */
#ifndef SWIG
     void GetForceIsValid(bool & placeHolder) const;
#endif
    inline  bool GetForceIsValid(void) const {
        return mForceIsValid;
    }
     void SetForceIsValid(const bool & newValue);
    /* accessors is set to: all */
     const bool & ForceIsValid(void) const;
     bool & ForceIsValid(void);
/* source line: 74 */

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
    void Copy(const prmStateCartesian & source);
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

}; // prmStateCartesian

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmStateCartesian> prmStateCartesianProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmStateCartesianProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmStateCartesian & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmStateCartesian & placeHolder);
/* data functions */
template <> class cmnData<prmStateCartesian > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmStateCartesian DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmStateCartesian & data) {
    outputStream << cmnData<prmStateCartesian >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmStateCartesian >::SerializeText(const prmStateCartesian & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmStateCartesian >::DeSerializeText(prmStateCartesian & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 80 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmStateCartesian);


#endif // _cisstParameterTypes_prmStateCartesian_h
