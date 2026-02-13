// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/arm_configuration.cdg

#include <sawIntuitiveResearchKit/arm_configuration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 8 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_arm_configurationProxy);

dvrk::arm_configuration::arm_configuration(void):
    m_generation(GENERATION_UNDEFINED)
    , kinematic()
    , mounting_pitch(0.0)
{}

dvrk::arm_configuration::arm_configuration(const arm_configuration & other):
    m_generation(other.m_generation)
    , kinematic(other.kinematic)
    , mounting_pitch(other.mounting_pitch)
{}

dvrk::arm_configuration & dvrk::arm_configuration::operator = (const arm_configuration & other)
{
    m_generation = other.m_generation;
    kinematic = other.kinematic;
    mounting_pitch = other.mounting_pitch;
    return *this;
}

dvrk::arm_configuration::~arm_configuration(void){}


void dvrk::arm_configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->m_generation);
    cmnSerializeRaw(outputStream__cdg, this->kinematic);
    cmnSerializeRaw(outputStream__cdg, this->mounting_pitch);
}


void dvrk::arm_configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->m_generation);
    cmnDeSerializeRaw(inputStream__cdg, this->kinematic);
    cmnDeSerializeRaw(inputStream__cdg, this->mounting_pitch);
}


void dvrk::arm_configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::arm_configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::arm_configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::arm_configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 13 */
/* source line: 21 */
/* source line: 27 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::arm_configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::arm_configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::arm_configuration::Copy(const dvrk::arm_configuration & source__cdg) {
    cmnData<dvrk::generation >::Copy(this->m_generation, source__cdg.m_generation);
    cmnData<std::string >::Copy(this->kinematic, source__cdg.kinematic);
    cmnData<double >::Copy(this->mounting_pitch, source__cdg.mounting_pitch);
}
void dvrk::arm_configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<dvrk::generation >::SerializeBinary(this->m_generation, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->kinematic, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->mounting_pitch, outputStream__cdg);
}
void dvrk::arm_configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<dvrk::generation >::DeSerializeBinary(this->m_generation, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->kinematic, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->mounting_pitch, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::arm_configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::generation >::SerializeText(this->m_generation, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->kinematic, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->mounting_pitch, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::arm_configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::generation >::SerializeDescription(this->m_generation, delimiter__cdg, prefix__cdg + "_generation");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->kinematic, delimiter__cdg, prefix__cdg + "kinematic");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->mounting_pitch, delimiter__cdg, prefix__cdg + "mounting_pitch");
    return description__cdg.str();
}
void dvrk::arm_configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::generation >::DeSerializeText(this->m_generation, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->kinematic, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->mounting_pitch, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::arm_configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::arm_configuration" << std::endl;
    description__cdg << "  _generation:" << cmnData<dvrk::generation >::HumanReadable(this->m_generation);
    description__cdg << "  kinematic:" << cmnData<std::string >::HumanReadable(this->kinematic);
    description__cdg << "  mounting_pitch:" << cmnData<double >::HumanReadable(this->mounting_pitch);
    return description__cdg.str();
}
bool dvrk::arm_configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<dvrk::generation >::ScalarNumberIsFixed(this->m_generation)
           && cmnData<std::string >::ScalarNumberIsFixed(this->kinematic)
           && cmnData<double >::ScalarNumberIsFixed(this->mounting_pitch)
    ;
}
size_t dvrk::arm_configuration::ScalarNumber(void) const {
    return 0
           + cmnData<dvrk::generation >::ScalarNumber(this->m_generation)
           + cmnData<std::string >::ScalarNumber(this->kinematic)
           + cmnData<double >::ScalarNumber(this->mounting_pitch)
    ;
}
std::string dvrk::arm_configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<dvrk::generation >::ScalarNumber(this->m_generation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::generation >::ScalarDescription(this->m_generation, index_cdg - baseIndex__cdg, prefix__cdg + "_generation");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->kinematic);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->kinematic, index_cdg - baseIndex__cdg, prefix__cdg + "kinematic");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->mounting_pitch);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->mounting_pitch, index_cdg - baseIndex__cdg, prefix__cdg + "mounting_pitch");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::arm_configuration index out of range"));
    return "";
}
double dvrk::arm_configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<dvrk::generation >::ScalarNumber(this->m_generation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::generation >::Scalar(this->m_generation, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->kinematic);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->kinematic, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->mounting_pitch);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->mounting_pitch, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::arm_configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::arm_configuration >::SerializeText(const dvrk::arm_configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::arm_configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<dvrk::generation >::SerializeText(this->m_generation, jsonValue["_generation"]);
    cmnDataJSON<std::string >::SerializeText(this->kinematic, jsonValue["kinematic"]);
    cmnDataJSON<double >::SerializeText(this->mounting_pitch, jsonValue["mounting_pitch"]);
}
template<>
void cmnDataJSON<dvrk::arm_configuration >::DeSerializeText(dvrk::arm_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::arm_configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["_generation"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::generation >::DeSerializeText(this->m_generation, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < m_generation");
        }
    };
    field__cdg = jsonValue["kinematic"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->kinematic, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < kinematic");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: kinematic");
    };
    field__cdg = jsonValue["mounting_pitch"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->mounting_pitch, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mounting_pitch");
        }
    };
}
#endif // CISST_HAS_JSON

