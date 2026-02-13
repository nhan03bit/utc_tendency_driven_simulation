// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/teleop_ECM_configuration.cdg

#include <sawIntuitiveResearchKit/teleop_ECM_configuration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 9 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_teleop_ECM_configurationProxy);

dvrk::teleop_ECM_configuration::teleop_ECM_configuration(void):
    scale(mtsIntuitiveResearchKit::TeleOperationECM::Scale)
{}

dvrk::teleop_ECM_configuration::teleop_ECM_configuration(const teleop_ECM_configuration & other):
    scale(other.scale)
{}

dvrk::teleop_ECM_configuration & dvrk::teleop_ECM_configuration::operator = (const teleop_ECM_configuration & other)
{
    scale = other.scale;
    return *this;
}

dvrk::teleop_ECM_configuration::~teleop_ECM_configuration(void){}


void dvrk::teleop_ECM_configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->scale);
}


void dvrk::teleop_ECM_configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->scale);
}


void dvrk::teleop_ECM_configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::teleop_ECM_configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::teleop_ECM_configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::teleop_ECM_configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 14 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::teleop_ECM_configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::teleop_ECM_configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::teleop_ECM_configuration::Copy(const dvrk::teleop_ECM_configuration & source__cdg) {
    cmnData<double >::Copy(this->scale, source__cdg.scale);
}
void dvrk::teleop_ECM_configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<double >::SerializeBinary(this->scale, outputStream__cdg);
}
void dvrk::teleop_ECM_configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<double >::DeSerializeBinary(this->scale, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::teleop_ECM_configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->scale, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::teleop_ECM_configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->scale, delimiter__cdg, prefix__cdg + "scale");
    return description__cdg.str();
}
void dvrk::teleop_ECM_configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_ECM_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->scale, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::teleop_ECM_configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::teleop_ECM_configuration" << std::endl;
    description__cdg << "  scale:" << cmnData<double >::HumanReadable(this->scale);
    return description__cdg.str();
}
bool dvrk::teleop_ECM_configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<double >::ScalarNumberIsFixed(this->scale)
    ;
}
size_t dvrk::teleop_ECM_configuration::ScalarNumber(void) const {
    return 0
           + cmnData<double >::ScalarNumber(this->scale)
    ;
}
std::string dvrk::teleop_ECM_configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->scale);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->scale, index_cdg - baseIndex__cdg, prefix__cdg + "scale");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::teleop_ECM_configuration index out of range"));
    return "";
}
double dvrk::teleop_ECM_configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->scale);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->scale, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::teleop_ECM_configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::teleop_ECM_configuration >::SerializeText(const dvrk::teleop_ECM_configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::teleop_ECM_configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<double >::SerializeText(this->scale, jsonValue["scale"]);
}
template<>
void cmnDataJSON<dvrk::teleop_ECM_configuration >::DeSerializeText(dvrk::teleop_ECM_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::teleop_ECM_configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["scale"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->scale, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < scale");
        }
    };
}
#endif // CISST_HAS_JSON

