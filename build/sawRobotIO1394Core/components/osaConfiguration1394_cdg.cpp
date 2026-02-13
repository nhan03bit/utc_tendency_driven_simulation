// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawRobotIO1394/core/components/code/osaConfiguration1394.cdg

#include <sawRobotIO1394/osaConfiguration1394.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 24 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaLinearFunctionProxy);

sawRobotIO1394::osaLinearFunction::osaLinearFunction(void):
    scale(0.0)
    , offset(0.0)
{}

sawRobotIO1394::osaLinearFunction::osaLinearFunction(const osaLinearFunction & other):
    scale(other.scale)
    , offset(other.offset)
{}

sawRobotIO1394::osaLinearFunction & sawRobotIO1394::osaLinearFunction::operator = (const osaLinearFunction & other)
{
    scale = other.scale;
    offset = other.offset;
    return *this;
}

sawRobotIO1394::osaLinearFunction::~osaLinearFunction(void){}


void sawRobotIO1394::osaLinearFunction::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->scale);
    cmnSerializeRaw(outputStream__cdg, this->offset);
}


void sawRobotIO1394::osaLinearFunction::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->scale);
    cmnDeSerializeRaw(inputStream__cdg, this->offset);
}


void sawRobotIO1394::osaLinearFunction::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaLinearFunction::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaLinearFunction >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaLinearFunction >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 28 */
/* source line: 34 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaLinearFunction & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaLinearFunction & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaLinearFunction::Copy(const sawRobotIO1394::osaLinearFunction & source__cdg) {
    cmnData<double >::Copy(this->scale, source__cdg.scale);
    cmnData<double >::Copy(this->offset, source__cdg.offset);
}
void sawRobotIO1394::osaLinearFunction::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<double >::SerializeBinary(this->scale, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->offset, outputStream__cdg);
}
void sawRobotIO1394::osaLinearFunction::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<double >::DeSerializeBinary(this->scale, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->offset, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaLinearFunction::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->scale, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->offset, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaLinearFunction::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->scale, delimiter__cdg, prefix__cdg + "scale");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->offset, delimiter__cdg, prefix__cdg + "offset");
    return description__cdg.str();
}
void sawRobotIO1394::osaLinearFunction::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLinearFunction");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->scale, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLinearFunction");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->offset, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaLinearFunction::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaLinearFunction" << std::endl;
    description__cdg << "  scale:" << cmnData<double >::HumanReadable(this->scale);
    description__cdg << "  offset:" << cmnData<double >::HumanReadable(this->offset);
    return description__cdg.str();
}
bool sawRobotIO1394::osaLinearFunction::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<double >::ScalarNumberIsFixed(this->scale)
           && cmnData<double >::ScalarNumberIsFixed(this->offset)
    ;
}
size_t sawRobotIO1394::osaLinearFunction::ScalarNumber(void) const {
    return 0
           + cmnData<double >::ScalarNumber(this->scale)
           + cmnData<double >::ScalarNumber(this->offset)
    ;
}
std::string sawRobotIO1394::osaLinearFunction::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->scale);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->scale, index_cdg - baseIndex__cdg, prefix__cdg + "scale");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->offset);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->offset, index_cdg - baseIndex__cdg, prefix__cdg + "offset");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaLinearFunction index out of range"));
    return "";
}
double sawRobotIO1394::osaLinearFunction::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->scale);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->scale, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->offset);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->offset, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaLinearFunction index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaLinearFunction >::SerializeText(const sawRobotIO1394::osaLinearFunction & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaLinearFunction::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<double >::SerializeText(this->scale, jsonValue["scale"]);
    cmnDataJSON<double >::SerializeText(this->offset, jsonValue["offset"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaLinearFunction >::DeSerializeText(sawRobotIO1394::osaLinearFunction & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaLinearFunction::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["scale"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->scale, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < scale");
        }
    };
    field__cdg = jsonValue["offset"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->offset, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < offset");
        }
    };
}
#endif // CISST_HAS_JSON

/* source line: 42 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaLimitsProxy);

sawRobotIO1394::osaLimits::osaLimits(void):
    lower()
    , upper()
{}

sawRobotIO1394::osaLimits::osaLimits(const osaLimits & other):
    lower(other.lower)
    , upper(other.upper)
{}

sawRobotIO1394::osaLimits & sawRobotIO1394::osaLimits::operator = (const osaLimits & other)
{
    lower = other.lower;
    upper = other.upper;
    return *this;
}

sawRobotIO1394::osaLimits::~osaLimits(void){}


void sawRobotIO1394::osaLimits::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->lower);
    cmnSerializeRaw(outputStream__cdg, this->upper);
}


void sawRobotIO1394::osaLimits::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->lower);
    cmnDeSerializeRaw(inputStream__cdg, this->upper);
}


void sawRobotIO1394::osaLimits::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaLimits::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaLimits >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaLimits >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 46 */
/* source line: 51 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaLimits & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaLimits & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaLimits::Copy(const sawRobotIO1394::osaLimits & source__cdg) {
    cmnData<double >::Copy(this->lower, source__cdg.lower);
    cmnData<double >::Copy(this->upper, source__cdg.upper);
}
void sawRobotIO1394::osaLimits::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<double >::SerializeBinary(this->lower, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->upper, outputStream__cdg);
}
void sawRobotIO1394::osaLimits::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<double >::DeSerializeBinary(this->lower, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->upper, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaLimits::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->lower, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->upper, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaLimits::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->lower, delimiter__cdg, prefix__cdg + "lower");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->upper, delimiter__cdg, prefix__cdg + "upper");
    return description__cdg.str();
}
void sawRobotIO1394::osaLimits::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLimits");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->lower, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLimits");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->upper, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaLimits::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaLimits" << std::endl;
    description__cdg << "  lower:" << cmnData<double >::HumanReadable(this->lower);
    description__cdg << "  upper:" << cmnData<double >::HumanReadable(this->upper);
    return description__cdg.str();
}
bool sawRobotIO1394::osaLimits::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<double >::ScalarNumberIsFixed(this->lower)
           && cmnData<double >::ScalarNumberIsFixed(this->upper)
    ;
}
size_t sawRobotIO1394::osaLimits::ScalarNumber(void) const {
    return 0
           + cmnData<double >::ScalarNumber(this->lower)
           + cmnData<double >::ScalarNumber(this->upper)
    ;
}
std::string sawRobotIO1394::osaLimits::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->lower);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->lower, index_cdg - baseIndex__cdg, prefix__cdg + "lower");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->upper);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->upper, index_cdg - baseIndex__cdg, prefix__cdg + "upper");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaLimits index out of range"));
    return "";
}
double sawRobotIO1394::osaLimits::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->lower);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->lower, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->upper);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->upper, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaLimits index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaLimits >::SerializeText(const sawRobotIO1394::osaLimits & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaLimits::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<double >::SerializeText(this->lower, jsonValue["lower"]);
    cmnDataJSON<double >::SerializeText(this->upper, jsonValue["upper"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaLimits >::DeSerializeText(sawRobotIO1394::osaLimits & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaLimits::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["lower"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->lower, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < lower");
        }
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: lower");
    };
    field__cdg = jsonValue["upper"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->upper, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < upper");
        }
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: upper");
    };
}
#endif // CISST_HAS_JSON

/* source line: 58 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDrive1394ConfigurationProxy);

sawRobotIO1394::osaDrive1394Configuration::osaDrive1394Configuration(void):
    effort_to_current(osaLinearFunction())
    , current_to_bits()
    , bits_to_current()
    , maximum_current(0.0)
{}

sawRobotIO1394::osaDrive1394Configuration::osaDrive1394Configuration(const osaDrive1394Configuration & other):
    effort_to_current(other.effort_to_current)
    , current_to_bits(other.current_to_bits)
    , bits_to_current(other.bits_to_current)
    , maximum_current(other.maximum_current)
{}

sawRobotIO1394::osaDrive1394Configuration & sawRobotIO1394::osaDrive1394Configuration::operator = (const osaDrive1394Configuration & other)
{
    effort_to_current = other.effort_to_current;
    current_to_bits = other.current_to_bits;
    bits_to_current = other.bits_to_current;
    maximum_current = other.maximum_current;
    return *this;
}

sawRobotIO1394::osaDrive1394Configuration::~osaDrive1394Configuration(void){}


void sawRobotIO1394::osaDrive1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->effort_to_current);
    cmnSerializeRaw(outputStream__cdg, this->current_to_bits);
    cmnSerializeRaw(outputStream__cdg, this->bits_to_current);
    cmnSerializeRaw(outputStream__cdg, this->maximum_current);
}


void sawRobotIO1394::osaDrive1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->effort_to_current);
    cmnDeSerializeRaw(inputStream__cdg, this->current_to_bits);
    cmnDeSerializeRaw(inputStream__cdg, this->bits_to_current);
    cmnDeSerializeRaw(inputStream__cdg, this->maximum_current);
}


void sawRobotIO1394::osaDrive1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDrive1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDrive1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDrive1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 62 */
/* source line: 68 */
/* source line: 73 */
/* source line: 78 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDrive1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDrive1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDrive1394Configuration::Copy(const sawRobotIO1394::osaDrive1394Configuration & source__cdg) {
    cmnData<osaLinearFunction >::Copy(this->effort_to_current, source__cdg.effort_to_current);
    cmnData<osaLinearFunction >::Copy(this->current_to_bits, source__cdg.current_to_bits);
    cmnData<osaLinearFunction >::Copy(this->bits_to_current, source__cdg.bits_to_current);
    cmnData<double >::Copy(this->maximum_current, source__cdg.maximum_current);
}
void sawRobotIO1394::osaDrive1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::SerializeBinary(this->effort_to_current, outputStream__cdg);
    cmnData<osaLinearFunction >::SerializeBinary(this->current_to_bits, outputStream__cdg);
    cmnData<osaLinearFunction >::SerializeBinary(this->bits_to_current, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->maximum_current, outputStream__cdg);
}
void sawRobotIO1394::osaDrive1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::DeSerializeBinary(this->effort_to_current, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLinearFunction >::DeSerializeBinary(this->current_to_bits, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLinearFunction >::DeSerializeBinary(this->bits_to_current, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->maximum_current, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDrive1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->effort_to_current, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->current_to_bits, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->bits_to_current, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->maximum_current, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDrive1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->effort_to_current, delimiter__cdg, prefix__cdg + "effort_to_current");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->current_to_bits, delimiter__cdg, prefix__cdg + "current_to_bits");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->bits_to_current, delimiter__cdg, prefix__cdg + "bits_to_current");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->maximum_current, delimiter__cdg, prefix__cdg + "maximum_current");
    return description__cdg.str();
}
void sawRobotIO1394::osaDrive1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->effort_to_current, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->current_to_bits, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->bits_to_current, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->maximum_current, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDrive1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDrive1394Configuration" << std::endl;
    description__cdg << "  effort_to_current:" << cmnData<osaLinearFunction >::HumanReadable(this->effort_to_current);
    description__cdg << "  current_to_bits:" << cmnData<osaLinearFunction >::HumanReadable(this->current_to_bits);
    description__cdg << "  bits_to_current:" << cmnData<osaLinearFunction >::HumanReadable(this->bits_to_current);
    description__cdg << "  maximum_current:" << cmnData<double >::HumanReadable(this->maximum_current);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDrive1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->effort_to_current)
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->current_to_bits)
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->bits_to_current)
           && cmnData<double >::ScalarNumberIsFixed(this->maximum_current)
    ;
}
size_t sawRobotIO1394::osaDrive1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<osaLinearFunction >::ScalarNumber(this->effort_to_current)
           + cmnData<osaLinearFunction >::ScalarNumber(this->current_to_bits)
           + cmnData<osaLinearFunction >::ScalarNumber(this->bits_to_current)
           + cmnData<double >::ScalarNumber(this->maximum_current)
    ;
}
std::string sawRobotIO1394::osaDrive1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->effort_to_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->effort_to_current, index_cdg - baseIndex__cdg, prefix__cdg + "effort_to_current");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->current_to_bits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->current_to_bits, index_cdg - baseIndex__cdg, prefix__cdg + "current_to_bits");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->bits_to_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->bits_to_current, index_cdg - baseIndex__cdg, prefix__cdg + "bits_to_current");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->maximum_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->maximum_current, index_cdg - baseIndex__cdg, prefix__cdg + "maximum_current");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDrive1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDrive1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->effort_to_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->effort_to_current, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->current_to_bits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->current_to_bits, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->bits_to_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->bits_to_current, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->maximum_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->maximum_current, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDrive1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::SerializeText(const sawRobotIO1394::osaDrive1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDrive1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<osaLinearFunction >::SerializeText(this->effort_to_current, jsonValue["effort_to_current"]);
    cmnDataJSON<osaLinearFunction >::SerializeText(this->current_to_bits, jsonValue["current_to_bits"]);
    cmnDataJSON<osaLinearFunction >::SerializeText(this->bits_to_current, jsonValue["bits_to_current"]);
    cmnDataJSON<double >::SerializeText(this->maximum_current, jsonValue["maximum_current"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::DeSerializeText(sawRobotIO1394::osaDrive1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDrive1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["effort_to_current"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaLinearFunction >::DeSerializeText(this->effort_to_current, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < effort_to_current");
        }
    };
    field__cdg = jsonValue["current_to_bits"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaLinearFunction >::DeSerializeText(this->current_to_bits, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < current_to_bits");
        }
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: current_to_bits");
    };
    field__cdg = jsonValue["bits_to_current"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaLinearFunction >::DeSerializeText(this->bits_to_current, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < bits_to_current");
        }
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: bits_to_current");
    };
    field__cdg = jsonValue["maximum_current"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->maximum_current, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < maximum_current");
        }
    };
}
#endif // CISST_HAS_JSON

/* source line: 86 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaEncoder1394ConfigurationProxy);

sawRobotIO1394::osaEncoder1394Configuration::osaEncoder1394Configuration(void):
    bits_to_position()
    , position_limits_soft()
    , velocity_source()
{}

sawRobotIO1394::osaEncoder1394Configuration::osaEncoder1394Configuration(const osaEncoder1394Configuration & other):
    bits_to_position(other.bits_to_position)
    , position_limits_soft(other.position_limits_soft)
    , velocity_source(other.velocity_source)
{}

sawRobotIO1394::osaEncoder1394Configuration & sawRobotIO1394::osaEncoder1394Configuration::operator = (const osaEncoder1394Configuration & other)
{
    bits_to_position = other.bits_to_position;
    position_limits_soft = other.position_limits_soft;
    velocity_source = other.velocity_source;
    return *this;
}

sawRobotIO1394::osaEncoder1394Configuration::~osaEncoder1394Configuration(void){}


void sawRobotIO1394::osaEncoder1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->bits_to_position);
    cmnSerializeRaw(outputStream__cdg, this->position_limits_soft);
    cmnSerializeRaw(outputStream__cdg, this->velocity_source);
}


void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->bits_to_position);
    cmnDeSerializeRaw(inputStream__cdg, this->position_limits_soft);
    cmnDeSerializeRaw(inputStream__cdg, this->velocity_source);
}


void sawRobotIO1394::osaEncoder1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaEncoder1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaEncoder1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaEncoder1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 101 */
/* source line: 106 */
/* source line: 111 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaEncoder1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaEncoder1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaEncoder1394Configuration::Copy(const sawRobotIO1394::osaEncoder1394Configuration & source__cdg) {
    cmnData<osaLinearFunction >::Copy(this->bits_to_position, source__cdg.bits_to_position);
    cmnData<osaLimits >::Copy(this->position_limits_soft, source__cdg.position_limits_soft);
    cmnData<osaEncoder1394Configuration::velocity_source_t >::Copy(this->velocity_source, source__cdg.velocity_source);
}
void sawRobotIO1394::osaEncoder1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::SerializeBinary(this->bits_to_position, outputStream__cdg);
    cmnData<osaLimits >::SerializeBinary(this->position_limits_soft, outputStream__cdg);
    cmnData<osaEncoder1394Configuration::velocity_source_t >::SerializeBinary(this->velocity_source, outputStream__cdg);
}
void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::DeSerializeBinary(this->bits_to_position, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLimits >::DeSerializeBinary(this->position_limits_soft, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaEncoder1394Configuration::velocity_source_t >::DeSerializeBinary(this->velocity_source, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaEncoder1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->bits_to_position, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLimits >::SerializeText(this->position_limits_soft, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaEncoder1394Configuration::velocity_source_t >::SerializeText(this->velocity_source, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaEncoder1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->bits_to_position, delimiter__cdg, prefix__cdg + "bits_to_position");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLimits >::SerializeDescription(this->position_limits_soft, delimiter__cdg, prefix__cdg + "position_limits_soft");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaEncoder1394Configuration::velocity_source_t >::SerializeDescription(this->velocity_source, delimiter__cdg, prefix__cdg + "velocity_source");
    return description__cdg.str();
}
void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaEncoder1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->bits_to_position, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaEncoder1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLimits >::DeSerializeText(this->position_limits_soft, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaEncoder1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaEncoder1394Configuration::velocity_source_t >::DeSerializeText(this->velocity_source, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaEncoder1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaEncoder1394Configuration" << std::endl;
    description__cdg << "  bits_to_position:" << cmnData<osaLinearFunction >::HumanReadable(this->bits_to_position);
    description__cdg << "  position_limits_soft:" << cmnData<osaLimits >::HumanReadable(this->position_limits_soft);
    description__cdg << "  velocity_source:" << cmnData<osaEncoder1394Configuration::velocity_source_t >::HumanReadable(this->velocity_source);
    return description__cdg.str();
}
bool sawRobotIO1394::osaEncoder1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->bits_to_position)
           && cmnData<osaLimits >::ScalarNumberIsFixed(this->position_limits_soft)
           && cmnData<osaEncoder1394Configuration::velocity_source_t >::ScalarNumberIsFixed(this->velocity_source)
    ;
}
size_t sawRobotIO1394::osaEncoder1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<osaLinearFunction >::ScalarNumber(this->bits_to_position)
           + cmnData<osaLimits >::ScalarNumber(this->position_limits_soft)
           + cmnData<osaEncoder1394Configuration::velocity_source_t >::ScalarNumber(this->velocity_source)
    ;
}
std::string sawRobotIO1394::osaEncoder1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->bits_to_position);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->bits_to_position, index_cdg - baseIndex__cdg, prefix__cdg + "bits_to_position");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLimits >::ScalarNumber(this->position_limits_soft);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLimits >::ScalarDescription(this->position_limits_soft, index_cdg - baseIndex__cdg, prefix__cdg + "position_limits_soft");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaEncoder1394Configuration::velocity_source_t >::ScalarNumber(this->velocity_source);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaEncoder1394Configuration::velocity_source_t >::ScalarDescription(this->velocity_source, index_cdg - baseIndex__cdg, prefix__cdg + "velocity_source");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaEncoder1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaEncoder1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->bits_to_position);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->bits_to_position, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLimits >::ScalarNumber(this->position_limits_soft);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLimits >::Scalar(this->position_limits_soft, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaEncoder1394Configuration::velocity_source_t >::ScalarNumber(this->velocity_source);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaEncoder1394Configuration::velocity_source_t >::Scalar(this->velocity_source, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaEncoder1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::SerializeText(const sawRobotIO1394::osaEncoder1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaEncoder1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<osaLinearFunction >::SerializeText(this->bits_to_position, jsonValue["bits_to_position"]);
    cmnDataJSON<osaLimits >::SerializeText(this->position_limits_soft, jsonValue["position_limits_soft"]);
    cmnDataJSON<osaEncoder1394Configuration::velocity_source_t >::SerializeText(this->velocity_source, jsonValue["velocity_source"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::DeSerializeText(sawRobotIO1394::osaEncoder1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["bits_to_position"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaLinearFunction >::DeSerializeText(this->bits_to_position, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < bits_to_position");
        }
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: bits_to_position");
    };
    field__cdg = jsonValue["position_limits_soft"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaLimits >::DeSerializeText(this->position_limits_soft, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < position_limits_soft");
        }
    } else {
        cmnThrow("cmnDataJson<osaLimits>::DeSerializeText: empty JSON value for: position_limits_soft");
    };
    field__cdg = jsonValue["velocity_source"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaEncoder1394Configuration::velocity_source_t >::DeSerializeText(this->velocity_source, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < velocity_source");
        }
    } else {
        cmnThrow("cmnDataJson<osaEncoder1394Configuration::velocity_source_t>::DeSerializeText: empty JSON value for: velocity_source");
    };
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_sawRobotIO1394__osaEncoder1394Configuration_velocity_source_t(const sawRobotIO1394::osaEncoder1394Configuration::velocity_source_t & data) {
    switch (data) {
        case sawRobotIO1394::osaEncoder1394Configuration::FIRMWARE:
            return "firmware";
            break;
        case sawRobotIO1394::osaEncoder1394Configuration::SOFTWARE:
            return "software";
            break;
        default: return "undefined enum sawRobotIO1394::osaEncoder1394Configuration::velocity_source_t";
            break;
    }
}

std::string sawRobotIO1394::osaEncoder1394Configuration::velocity_source_tToString(const sawRobotIO1394::osaEncoder1394Configuration::velocity_source_t & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case sawRobotIO1394::osaEncoder1394Configuration::FIRMWARE:
            return "FIRMWARE";
            break;
        case sawRobotIO1394::osaEncoder1394Configuration::SOFTWARE:
            return "SOFTWARE";
            break;
        default:
            break;
    }
    cmnThrow("sawRobotIO1394::osaEncoder1394Configuration::velocity_source_tToString called with invalid enum");
    return "";
}

sawRobotIO1394::osaEncoder1394Configuration::velocity_source_t sawRobotIO1394::osaEncoder1394Configuration::velocity_source_tFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "FIRMWARE") {
        return sawRobotIO1394::osaEncoder1394Configuration::FIRMWARE;
    };
    if (value == "SOFTWARE") {
        return sawRobotIO1394::osaEncoder1394Configuration::SOFTWARE;
    };
    std::string message = "sawRobotIO1394::osaEncoder1394Configuration::velocity_source_tFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = velocity_source_tVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<sawRobotIO1394::osaEncoder1394Configuration::velocity_source_t >(0);
}

const std::vector<int> & sawRobotIO1394::osaEncoder1394Configuration::velocity_source_tVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(FIRMWARE));
        vectorInt.push_back(static_cast<int>(SOFTWARE));
    }
    return vectorInt;
}

const std::vector<std::string> & sawRobotIO1394::osaEncoder1394Configuration::velocity_source_tVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("FIRMWARE");
        vectorString.push_back("SOFTWARE");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(sawRobotIO1394::osaEncoder1394Configuration::velocity_source_t, sawRobotIO1394::osaEncoder1394Configuration::velocity_source_tToString, sawRobotIO1394::osaEncoder1394Configuration::velocity_source_tFromString);
#endif // CISST_HAS_JSON

/* source line: 118 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaPotentiometer1394ConfigurationProxy);

sawRobotIO1394::osaPotentiometer1394Configuration::osaPotentiometer1394Configuration(void):
    bits_to_voltage()
    , voltage_to_position(osaLinearFunction())
{}

sawRobotIO1394::osaPotentiometer1394Configuration::osaPotentiometer1394Configuration(const osaPotentiometer1394Configuration & other):
    bits_to_voltage(other.bits_to_voltage)
    , voltage_to_position(other.voltage_to_position)
{}

sawRobotIO1394::osaPotentiometer1394Configuration & sawRobotIO1394::osaPotentiometer1394Configuration::operator = (const osaPotentiometer1394Configuration & other)
{
    bits_to_voltage = other.bits_to_voltage;
    voltage_to_position = other.voltage_to_position;
    return *this;
}

sawRobotIO1394::osaPotentiometer1394Configuration::~osaPotentiometer1394Configuration(void){}


void sawRobotIO1394::osaPotentiometer1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->bits_to_voltage);
    cmnSerializeRaw(outputStream__cdg, this->voltage_to_position);
}


void sawRobotIO1394::osaPotentiometer1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->bits_to_voltage);
    cmnDeSerializeRaw(inputStream__cdg, this->voltage_to_position);
}


void sawRobotIO1394::osaPotentiometer1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaPotentiometer1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaPotentiometer1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaPotentiometer1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 122 */
/* source line: 127 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPotentiometer1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPotentiometer1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaPotentiometer1394Configuration::Copy(const sawRobotIO1394::osaPotentiometer1394Configuration & source__cdg) {
    cmnData<osaLinearFunction >::Copy(this->bits_to_voltage, source__cdg.bits_to_voltage);
    cmnData<osaLinearFunction >::Copy(this->voltage_to_position, source__cdg.voltage_to_position);
}
void sawRobotIO1394::osaPotentiometer1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::SerializeBinary(this->bits_to_voltage, outputStream__cdg);
    cmnData<osaLinearFunction >::SerializeBinary(this->voltage_to_position, outputStream__cdg);
}
void sawRobotIO1394::osaPotentiometer1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::DeSerializeBinary(this->bits_to_voltage, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLinearFunction >::DeSerializeBinary(this->voltage_to_position, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaPotentiometer1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->bits_to_voltage, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->voltage_to_position, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPotentiometer1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->bits_to_voltage, delimiter__cdg, prefix__cdg + "bits_to_voltage");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->voltage_to_position, delimiter__cdg, prefix__cdg + "voltage_to_position");
    return description__cdg.str();
}
void sawRobotIO1394::osaPotentiometer1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotentiometer1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->bits_to_voltage, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotentiometer1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->voltage_to_position, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPotentiometer1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaPotentiometer1394Configuration" << std::endl;
    description__cdg << "  bits_to_voltage:" << cmnData<osaLinearFunction >::HumanReadable(this->bits_to_voltage);
    description__cdg << "  voltage_to_position:" << cmnData<osaLinearFunction >::HumanReadable(this->voltage_to_position);
    return description__cdg.str();
}
bool sawRobotIO1394::osaPotentiometer1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->bits_to_voltage)
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->voltage_to_position)
    ;
}
size_t sawRobotIO1394::osaPotentiometer1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<osaLinearFunction >::ScalarNumber(this->bits_to_voltage)
           + cmnData<osaLinearFunction >::ScalarNumber(this->voltage_to_position)
    ;
}
std::string sawRobotIO1394::osaPotentiometer1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->bits_to_voltage);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->bits_to_voltage, index_cdg - baseIndex__cdg, prefix__cdg + "bits_to_voltage");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->voltage_to_position);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->voltage_to_position, index_cdg - baseIndex__cdg, prefix__cdg + "voltage_to_position");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaPotentiometer1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaPotentiometer1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->bits_to_voltage);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->bits_to_voltage, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->voltage_to_position);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->voltage_to_position, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaPotentiometer1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaPotentiometer1394Configuration >::SerializeText(const sawRobotIO1394::osaPotentiometer1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPotentiometer1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<osaLinearFunction >::SerializeText(this->bits_to_voltage, jsonValue["bits_to_voltage"]);
    cmnDataJSON<osaLinearFunction >::SerializeText(this->voltage_to_position, jsonValue["voltage_to_position"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaPotentiometer1394Configuration >::DeSerializeText(sawRobotIO1394::osaPotentiometer1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPotentiometer1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["bits_to_voltage"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaLinearFunction >::DeSerializeText(this->bits_to_voltage, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < bits_to_voltage");
        }
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: bits_to_voltage");
    };
    field__cdg = jsonValue["voltage_to_position"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaLinearFunction >::DeSerializeText(this->voltage_to_position, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < voltage_to_position");
        }
    };
}
#endif // CISST_HAS_JSON

/* source line: 135 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaBrake1394ConfigurationProxy);

sawRobotIO1394::osaBrake1394Configuration::osaBrake1394Configuration(void):
    board_id()
    , axis_id(-1)
    , drive()
    , release_current()
    , release_time()
    , released_current()
    , engaged_current()
{}

sawRobotIO1394::osaBrake1394Configuration::osaBrake1394Configuration(const osaBrake1394Configuration & other):
    board_id(other.board_id)
    , axis_id(other.axis_id)
    , drive(other.drive)
    , release_current(other.release_current)
    , release_time(other.release_time)
    , released_current(other.released_current)
    , engaged_current(other.engaged_current)
{}

sawRobotIO1394::osaBrake1394Configuration & sawRobotIO1394::osaBrake1394Configuration::operator = (const osaBrake1394Configuration & other)
{
    board_id = other.board_id;
    axis_id = other.axis_id;
    drive = other.drive;
    release_current = other.release_current;
    release_time = other.release_time;
    released_current = other.released_current;
    engaged_current = other.engaged_current;
    return *this;
}

sawRobotIO1394::osaBrake1394Configuration::~osaBrake1394Configuration(void){}


void sawRobotIO1394::osaBrake1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->board_id);
    cmnSerializeRaw(outputStream__cdg, this->axis_id);
    cmnSerializeRaw(outputStream__cdg, this->drive);
    cmnSerializeRaw(outputStream__cdg, this->release_current);
    cmnSerializeRaw(outputStream__cdg, this->release_time);
    cmnSerializeRaw(outputStream__cdg, this->released_current);
    cmnSerializeRaw(outputStream__cdg, this->engaged_current);
}


void sawRobotIO1394::osaBrake1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->board_id);
    cmnDeSerializeRaw(inputStream__cdg, this->axis_id);
    cmnDeSerializeRaw(inputStream__cdg, this->drive);
    cmnDeSerializeRaw(inputStream__cdg, this->release_current);
    cmnDeSerializeRaw(inputStream__cdg, this->release_time);
    cmnDeSerializeRaw(inputStream__cdg, this->released_current);
    cmnDeSerializeRaw(inputStream__cdg, this->engaged_current);
}


void sawRobotIO1394::osaBrake1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaBrake1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaBrake1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaBrake1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 139 */
/* source line: 144 */
/* source line: 150 */
/* source line: 155 */
/* source line: 160 */
/* source line: 165 */
/* source line: 170 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaBrake1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaBrake1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaBrake1394Configuration::Copy(const sawRobotIO1394::osaBrake1394Configuration & source__cdg) {
    cmnData<int >::Copy(this->board_id, source__cdg.board_id);
    cmnData<int >::Copy(this->axis_id, source__cdg.axis_id);
    cmnData<osaDrive1394Configuration >::Copy(this->drive, source__cdg.drive);
    cmnData<double >::Copy(this->release_current, source__cdg.release_current);
    cmnData<double >::Copy(this->release_time, source__cdg.release_time);
    cmnData<double >::Copy(this->released_current, source__cdg.released_current);
    cmnData<double >::Copy(this->engaged_current, source__cdg.engaged_current);
}
void sawRobotIO1394::osaBrake1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->board_id, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->axis_id, outputStream__cdg);
    cmnData<osaDrive1394Configuration >::SerializeBinary(this->drive, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->release_current, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->release_time, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->released_current, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->engaged_current, outputStream__cdg);
}
void sawRobotIO1394::osaBrake1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->board_id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->axis_id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaDrive1394Configuration >::DeSerializeBinary(this->drive, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->release_current, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->release_time, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->released_current, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->engaged_current, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaBrake1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->board_id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->axis_id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::SerializeText(this->drive, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->release_current, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->release_time, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->released_current, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->engaged_current, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaBrake1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->board_id, delimiter__cdg, prefix__cdg + "board_id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->axis_id, delimiter__cdg, prefix__cdg + "axis_id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaDrive1394Configuration >::SerializeDescription(this->drive, delimiter__cdg, prefix__cdg + "drive");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->release_current, delimiter__cdg, prefix__cdg + "release_current");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->release_time, delimiter__cdg, prefix__cdg + "release_time");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->released_current, delimiter__cdg, prefix__cdg + "released_current");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->engaged_current, delimiter__cdg, prefix__cdg + "engaged_current");
    return description__cdg.str();
}
void sawRobotIO1394::osaBrake1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->board_id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->axis_id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::DeSerializeText(this->drive, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->release_current, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->release_time, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->released_current, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->engaged_current, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaBrake1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaBrake1394Configuration" << std::endl;
    description__cdg << "  board_id:" << cmnData<int >::HumanReadable(this->board_id);
    description__cdg << "  axis_id:" << cmnData<int >::HumanReadable(this->axis_id);
    description__cdg << "  drive:" << cmnData<osaDrive1394Configuration >::HumanReadable(this->drive);
    description__cdg << "  release_current:" << cmnData<double >::HumanReadable(this->release_current);
    description__cdg << "  release_time:" << cmnData<double >::HumanReadable(this->release_time);
    description__cdg << "  released_current:" << cmnData<double >::HumanReadable(this->released_current);
    description__cdg << "  engaged_current:" << cmnData<double >::HumanReadable(this->engaged_current);
    return description__cdg.str();
}
bool sawRobotIO1394::osaBrake1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->board_id)
           && cmnData<int >::ScalarNumberIsFixed(this->axis_id)
           && cmnData<osaDrive1394Configuration >::ScalarNumberIsFixed(this->drive)
           && cmnData<double >::ScalarNumberIsFixed(this->release_current)
           && cmnData<double >::ScalarNumberIsFixed(this->release_time)
           && cmnData<double >::ScalarNumberIsFixed(this->released_current)
           && cmnData<double >::ScalarNumberIsFixed(this->engaged_current)
    ;
}
size_t sawRobotIO1394::osaBrake1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->board_id)
           + cmnData<int >::ScalarNumber(this->axis_id)
           + cmnData<osaDrive1394Configuration >::ScalarNumber(this->drive)
           + cmnData<double >::ScalarNumber(this->release_current)
           + cmnData<double >::ScalarNumber(this->release_time)
           + cmnData<double >::ScalarNumber(this->released_current)
           + cmnData<double >::ScalarNumber(this->engaged_current)
    ;
}
std::string sawRobotIO1394::osaBrake1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->board_id, index_cdg - baseIndex__cdg, prefix__cdg + "board_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->axis_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->axis_id, index_cdg - baseIndex__cdg, prefix__cdg + "axis_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::ScalarDescription(this->drive, index_cdg - baseIndex__cdg, prefix__cdg + "drive");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->release_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->release_current, index_cdg - baseIndex__cdg, prefix__cdg + "release_current");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->release_time);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->release_time, index_cdg - baseIndex__cdg, prefix__cdg + "release_time");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->released_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->released_current, index_cdg - baseIndex__cdg, prefix__cdg + "released_current");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->engaged_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->engaged_current, index_cdg - baseIndex__cdg, prefix__cdg + "engaged_current");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaBrake1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaBrake1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->board_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->axis_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->axis_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::Scalar(this->drive, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->release_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->release_current, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->release_time);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->release_time, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->released_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->released_current, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->engaged_current);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->engaged_current, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaBrake1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaBrake1394Configuration >::SerializeText(const sawRobotIO1394::osaBrake1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaBrake1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->board_id, jsonValue["board_id"]);
    cmnDataJSON<int >::SerializeText(this->axis_id, jsonValue["axis_id"]);
    cmnDataJSON<osaDrive1394Configuration >::SerializeText(this->drive, jsonValue["drive"]);
    cmnDataJSON<double >::SerializeText(this->release_current, jsonValue["release_current"]);
    cmnDataJSON<double >::SerializeText(this->release_time, jsonValue["release_time"]);
    cmnDataJSON<double >::SerializeText(this->released_current, jsonValue["released_current"]);
    cmnDataJSON<double >::SerializeText(this->engaged_current, jsonValue["engaged_current"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaBrake1394Configuration >::DeSerializeText(sawRobotIO1394::osaBrake1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaBrake1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["board_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->board_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < board_id");
        }
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: board_id");
    };
    field__cdg = jsonValue["axis_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->axis_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < axis_id");
        }
    };
    field__cdg = jsonValue["drive"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaDrive1394Configuration >::DeSerializeText(this->drive, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < drive");
        }
    } else {
        cmnThrow("cmnDataJson<osaDrive1394Configuration>::DeSerializeText: empty JSON value for: drive");
    };
    field__cdg = jsonValue["release_current"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->release_current, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < release_current");
        }
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: release_current");
    };
    field__cdg = jsonValue["release_time"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->release_time, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < release_time");
        }
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: release_time");
    };
    field__cdg = jsonValue["released_current"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->released_current, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < released_current");
        }
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: released_current");
    };
    field__cdg = jsonValue["engaged_current"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->engaged_current, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < engaged_current");
        }
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: engaged_current");
    };
}
#endif // CISST_HAS_JSON

/* source line: 177 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaActuator1394ConfigurationProxy);

sawRobotIO1394::osaActuator1394Configuration::osaActuator1394Configuration(void):
    board_id()
    , axis_id(-1)
    , joint_type(cmnJointType::CMN_JOINT_UNDEFINED)
    , drive()
    , encoder(osaEncoder1394Configuration())
    , potentiometer(osaPotentiometer1394Configuration())
{}

sawRobotIO1394::osaActuator1394Configuration::osaActuator1394Configuration(const osaActuator1394Configuration & other):
    board_id(other.board_id)
    , axis_id(other.axis_id)
    , joint_type(other.joint_type)
    , drive(other.drive)
    , encoder(other.encoder)
    , potentiometer(other.potentiometer)
{}

sawRobotIO1394::osaActuator1394Configuration & sawRobotIO1394::osaActuator1394Configuration::operator = (const osaActuator1394Configuration & other)
{
    board_id = other.board_id;
    axis_id = other.axis_id;
    joint_type = other.joint_type;
    drive = other.drive;
    encoder = other.encoder;
    potentiometer = other.potentiometer;
    return *this;
}

sawRobotIO1394::osaActuator1394Configuration::~osaActuator1394Configuration(void){}


void sawRobotIO1394::osaActuator1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->board_id);
    cmnSerializeRaw(outputStream__cdg, this->axis_id);
    cmnSerializeRaw(outputStream__cdg, this->joint_type);
    cmnSerializeRaw(outputStream__cdg, this->drive);
    cmnSerializeRaw(outputStream__cdg, this->encoder);
    cmnSerializeRaw(outputStream__cdg, this->potentiometer);
}


void sawRobotIO1394::osaActuator1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->board_id);
    cmnDeSerializeRaw(inputStream__cdg, this->axis_id);
    cmnDeSerializeRaw(inputStream__cdg, this->joint_type);
    cmnDeSerializeRaw(inputStream__cdg, this->drive);
    cmnDeSerializeRaw(inputStream__cdg, this->encoder);
    cmnDeSerializeRaw(inputStream__cdg, this->potentiometer);
}


void sawRobotIO1394::osaActuator1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaActuator1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaActuator1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaActuator1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 181 */
/* source line: 186 */
/* source line: 192 */
/* source line: 198 */
/* source line: 203 */
/* source line: 209 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuator1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuator1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaActuator1394Configuration::Copy(const sawRobotIO1394::osaActuator1394Configuration & source__cdg) {
    cmnData<int >::Copy(this->board_id, source__cdg.board_id);
    cmnData<int >::Copy(this->axis_id, source__cdg.axis_id);
    cmnData<cmnJointType >::Copy(this->joint_type, source__cdg.joint_type);
    cmnData<osaDrive1394Configuration >::Copy(this->drive, source__cdg.drive);
    cmnData<osaEncoder1394Configuration >::Copy(this->encoder, source__cdg.encoder);
    cmnData<osaPotentiometer1394Configuration >::Copy(this->potentiometer, source__cdg.potentiometer);
}
void sawRobotIO1394::osaActuator1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->board_id, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->axis_id, outputStream__cdg);
    cmnData<cmnJointType >::SerializeBinary(this->joint_type, outputStream__cdg);
    cmnData<osaDrive1394Configuration >::SerializeBinary(this->drive, outputStream__cdg);
    cmnData<osaEncoder1394Configuration >::SerializeBinary(this->encoder, outputStream__cdg);
    cmnData<osaPotentiometer1394Configuration >::SerializeBinary(this->potentiometer, outputStream__cdg);
}
void sawRobotIO1394::osaActuator1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->board_id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->axis_id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<cmnJointType >::DeSerializeBinary(this->joint_type, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaDrive1394Configuration >::DeSerializeBinary(this->drive, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaEncoder1394Configuration >::DeSerializeBinary(this->encoder, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaPotentiometer1394Configuration >::DeSerializeBinary(this->potentiometer, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaActuator1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->board_id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->axis_id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<cmnJointType >::SerializeText(this->joint_type, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::SerializeText(this->drive, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaEncoder1394Configuration >::SerializeText(this->encoder, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaPotentiometer1394Configuration >::SerializeText(this->potentiometer, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuator1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->board_id, delimiter__cdg, prefix__cdg + "board_id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->axis_id, delimiter__cdg, prefix__cdg + "axis_id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<cmnJointType >::SerializeDescription(this->joint_type, delimiter__cdg, prefix__cdg + "joint_type");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaDrive1394Configuration >::SerializeDescription(this->drive, delimiter__cdg, prefix__cdg + "drive");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaEncoder1394Configuration >::SerializeDescription(this->encoder, delimiter__cdg, prefix__cdg + "encoder");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaPotentiometer1394Configuration >::SerializeDescription(this->potentiometer, delimiter__cdg, prefix__cdg + "potentiometer");
    return description__cdg.str();
}
void sawRobotIO1394::osaActuator1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->board_id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->axis_id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<cmnJointType >::DeSerializeText(this->joint_type, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::DeSerializeText(this->drive, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaEncoder1394Configuration >::DeSerializeText(this->encoder, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaPotentiometer1394Configuration >::DeSerializeText(this->potentiometer, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuator1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaActuator1394Configuration" << std::endl;
    description__cdg << "  board_id:" << cmnData<int >::HumanReadable(this->board_id);
    description__cdg << "  axis_id:" << cmnData<int >::HumanReadable(this->axis_id);
    description__cdg << "  joint_type:" << cmnData<cmnJointType >::HumanReadable(this->joint_type);
    description__cdg << "  drive:" << cmnData<osaDrive1394Configuration >::HumanReadable(this->drive);
    description__cdg << "  encoder:" << cmnData<osaEncoder1394Configuration >::HumanReadable(this->encoder);
    description__cdg << "  potentiometer:" << cmnData<osaPotentiometer1394Configuration >::HumanReadable(this->potentiometer);
    return description__cdg.str();
}
bool sawRobotIO1394::osaActuator1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->board_id)
           && cmnData<int >::ScalarNumberIsFixed(this->axis_id)
           && cmnData<cmnJointType >::ScalarNumberIsFixed(this->joint_type)
           && cmnData<osaDrive1394Configuration >::ScalarNumberIsFixed(this->drive)
           && cmnData<osaEncoder1394Configuration >::ScalarNumberIsFixed(this->encoder)
           && cmnData<osaPotentiometer1394Configuration >::ScalarNumberIsFixed(this->potentiometer)
    ;
}
size_t sawRobotIO1394::osaActuator1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->board_id)
           + cmnData<int >::ScalarNumber(this->axis_id)
           + cmnData<cmnJointType >::ScalarNumber(this->joint_type)
           + cmnData<osaDrive1394Configuration >::ScalarNumber(this->drive)
           + cmnData<osaEncoder1394Configuration >::ScalarNumber(this->encoder)
           + cmnData<osaPotentiometer1394Configuration >::ScalarNumber(this->potentiometer)
    ;
}
std::string sawRobotIO1394::osaActuator1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->board_id, index_cdg - baseIndex__cdg, prefix__cdg + "board_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->axis_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->axis_id, index_cdg - baseIndex__cdg, prefix__cdg + "axis_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<cmnJointType >::ScalarNumber(this->joint_type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<cmnJointType >::ScalarDescription(this->joint_type, index_cdg - baseIndex__cdg, prefix__cdg + "joint_type");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::ScalarDescription(this->drive, index_cdg - baseIndex__cdg, prefix__cdg + "drive");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaEncoder1394Configuration >::ScalarNumber(this->encoder);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaEncoder1394Configuration >::ScalarDescription(this->encoder, index_cdg - baseIndex__cdg, prefix__cdg + "encoder");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaPotentiometer1394Configuration >::ScalarNumber(this->potentiometer);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPotentiometer1394Configuration >::ScalarDescription(this->potentiometer, index_cdg - baseIndex__cdg, prefix__cdg + "potentiometer");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaActuator1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaActuator1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->board_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->axis_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->axis_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<cmnJointType >::ScalarNumber(this->joint_type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<cmnJointType >::Scalar(this->joint_type, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::Scalar(this->drive, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaEncoder1394Configuration >::ScalarNumber(this->encoder);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaEncoder1394Configuration >::Scalar(this->encoder, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaPotentiometer1394Configuration >::ScalarNumber(this->potentiometer);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPotentiometer1394Configuration >::Scalar(this->potentiometer, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaActuator1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::SerializeText(const sawRobotIO1394::osaActuator1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuator1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->board_id, jsonValue["board_id"]);
    cmnDataJSON<int >::SerializeText(this->axis_id, jsonValue["axis_id"]);
    cmnDataJSON<cmnJointType >::SerializeText(this->joint_type, jsonValue["joint_type"]);
    cmnDataJSON<osaDrive1394Configuration >::SerializeText(this->drive, jsonValue["drive"]);
    cmnDataJSON<osaEncoder1394Configuration >::SerializeText(this->encoder, jsonValue["encoder"]);
    cmnDataJSON<osaPotentiometer1394Configuration >::SerializeText(this->potentiometer, jsonValue["potentiometer"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::DeSerializeText(sawRobotIO1394::osaActuator1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuator1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["board_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->board_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < board_id");
        }
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: board_id");
    };
    field__cdg = jsonValue["axis_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->axis_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < axis_id");
        }
    };
    field__cdg = jsonValue["joint_type"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<cmnJointType >::DeSerializeText(this->joint_type, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < joint_type");
        }
    };
    field__cdg = jsonValue["drive"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaDrive1394Configuration >::DeSerializeText(this->drive, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < drive");
        }
    } else {
        cmnThrow("cmnDataJson<osaDrive1394Configuration>::DeSerializeText: empty JSON value for: drive");
    };
    field__cdg = jsonValue["encoder"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaEncoder1394Configuration >::DeSerializeText(this->encoder, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < encoder");
        }
    };
    field__cdg = jsonValue["potentiometer"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaPotentiometer1394Configuration >::DeSerializeText(this->potentiometer, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < potentiometer");
        }
    };
}
#endif // CISST_HAS_JSON

/* source line: 217 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaPotentiometerTolerance1394ConfigurationProxy);

sawRobotIO1394::osaPotentiometerTolerance1394Configuration::osaPotentiometerTolerance1394Configuration(void):
    axis_id(-1)
    , distance()
    , latency()
{}

sawRobotIO1394::osaPotentiometerTolerance1394Configuration::osaPotentiometerTolerance1394Configuration(const osaPotentiometerTolerance1394Configuration & other):
    axis_id(other.axis_id)
    , distance(other.distance)
    , latency(other.latency)
{}

sawRobotIO1394::osaPotentiometerTolerance1394Configuration & sawRobotIO1394::osaPotentiometerTolerance1394Configuration::operator = (const osaPotentiometerTolerance1394Configuration & other)
{
    axis_id = other.axis_id;
    distance = other.distance;
    latency = other.latency;
    return *this;
}

sawRobotIO1394::osaPotentiometerTolerance1394Configuration::~osaPotentiometerTolerance1394Configuration(void){}


void sawRobotIO1394::osaPotentiometerTolerance1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->axis_id);
    cmnSerializeRaw(outputStream__cdg, this->distance);
    cmnSerializeRaw(outputStream__cdg, this->latency);
}


void sawRobotIO1394::osaPotentiometerTolerance1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->axis_id);
    cmnDeSerializeRaw(inputStream__cdg, this->distance);
    cmnDeSerializeRaw(inputStream__cdg, this->latency);
}


void sawRobotIO1394::osaPotentiometerTolerance1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaPotentiometerTolerance1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaPotentiometerTolerance1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaPotentiometerTolerance1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 221 */
/* source line: 227 */
/* source line: 232 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPotentiometerTolerance1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPotentiometerTolerance1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaPotentiometerTolerance1394Configuration::Copy(const sawRobotIO1394::osaPotentiometerTolerance1394Configuration & source__cdg) {
    cmnData<int >::Copy(this->axis_id, source__cdg.axis_id);
    cmnData<double >::Copy(this->distance, source__cdg.distance);
    cmnData<double >::Copy(this->latency, source__cdg.latency);
}
void sawRobotIO1394::osaPotentiometerTolerance1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->axis_id, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->distance, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->latency, outputStream__cdg);
}
void sawRobotIO1394::osaPotentiometerTolerance1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->axis_id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->distance, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->latency, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaPotentiometerTolerance1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->axis_id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->distance, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->latency, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPotentiometerTolerance1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->axis_id, delimiter__cdg, prefix__cdg + "axis_id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->distance, delimiter__cdg, prefix__cdg + "distance");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->latency, delimiter__cdg, prefix__cdg + "latency");
    return description__cdg.str();
}
void sawRobotIO1394::osaPotentiometerTolerance1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotentiometerTolerance1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->axis_id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotentiometerTolerance1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->distance, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotentiometerTolerance1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->latency, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPotentiometerTolerance1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaPotentiometerTolerance1394Configuration" << std::endl;
    description__cdg << "  axis_id:" << cmnData<int >::HumanReadable(this->axis_id);
    description__cdg << "  distance:" << cmnData<double >::HumanReadable(this->distance);
    description__cdg << "  latency:" << cmnData<double >::HumanReadable(this->latency);
    return description__cdg.str();
}
bool sawRobotIO1394::osaPotentiometerTolerance1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->axis_id)
           && cmnData<double >::ScalarNumberIsFixed(this->distance)
           && cmnData<double >::ScalarNumberIsFixed(this->latency)
    ;
}
size_t sawRobotIO1394::osaPotentiometerTolerance1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->axis_id)
           + cmnData<double >::ScalarNumber(this->distance)
           + cmnData<double >::ScalarNumber(this->latency)
    ;
}
std::string sawRobotIO1394::osaPotentiometerTolerance1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->axis_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->axis_id, index_cdg - baseIndex__cdg, prefix__cdg + "axis_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->distance);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->distance, index_cdg - baseIndex__cdg, prefix__cdg + "distance");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->latency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->latency, index_cdg - baseIndex__cdg, prefix__cdg + "latency");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaPotentiometerTolerance1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaPotentiometerTolerance1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->axis_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->axis_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->distance);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->distance, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->latency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->latency, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaPotentiometerTolerance1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaPotentiometerTolerance1394Configuration >::SerializeText(const sawRobotIO1394::osaPotentiometerTolerance1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPotentiometerTolerance1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->axis_id, jsonValue["axis_id"]);
    cmnDataJSON<double >::SerializeText(this->distance, jsonValue["distance"]);
    cmnDataJSON<double >::SerializeText(this->latency, jsonValue["latency"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaPotentiometerTolerance1394Configuration >::DeSerializeText(sawRobotIO1394::osaPotentiometerTolerance1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPotentiometerTolerance1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["axis_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->axis_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < axis_id");
        }
    };
    field__cdg = jsonValue["distance"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->distance, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < distance");
        }
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: distance");
    };
    field__cdg = jsonValue["latency"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->latency, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < latency");
        }
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: latency");
    };
}
#endif // CISST_HAS_JSON

/* source line: 239 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(osa1394Proxy);

osa1394::osa1394(void)
{}

osa1394::osa1394(const osa1394 & CMN_UNUSED(other))
{}

osa1394 & osa1394::operator = (const osa1394 & CMN_UNUSED(other))
{
    return *this;
}

osa1394::~osa1394(void){}


void osa1394::SerializeRaw(std::ostream & CMN_UNUSED(outputStream__cdg)) const
{
}


void osa1394::DeSerializeRaw(std::istream & CMN_UNUSED(inputStream__cdg))
{
}


void osa1394::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void osa1394::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<osa1394 >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<osa1394 >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const osa1394 & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, osa1394 & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void osa1394::Copy(const osa1394 & CMN_UNUSED(source__cdg)) {
}
void osa1394::SerializeBinary(std::ostream & CMN_UNUSED(outputStream__cdg)) const CISST_THROW(std::runtime_error) {
}
void osa1394::DeSerializeBinary(std::istream & CMN_UNUSED(inputStream__cdg),
                                            const cmnDataFormat & CMN_UNUSED(localFormat),
                                            const cmnDataFormat & CMN_UNUSED(remoteFormat)) CISST_THROW(std::runtime_error) {
}
void osa1394::SerializeText(std::ostream & CMN_UNUSED(outputStream__cdg), const char CMN_UNUSED(delimiter__cdg)) const CISST_THROW(std::runtime_error) {
}
std::string osa1394::SerializeDescription(const char CMN_UNUSED(delimiter__cdg), const std::string & CMN_UNUSED(userDescription__cdg)) const {
    std::stringstream description__cdg;
    return description__cdg.str();
}
void osa1394::DeSerializeText(std::istream & CMN_UNUSED(inputStream__cdg),
                                          const char CMN_UNUSED(delimiter__cdg)) CISST_THROW(std::runtime_error) {
}
std::string osa1394::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "osa1394" << std::endl;
    return description__cdg.str();
}
bool osa1394::ScalarNumberIsFixed(void) const {
    return true
    ;
}
size_t osa1394::ScalarNumber(void) const {
    return 0
    ;
}
std::string osa1394::ScalarDescription(const size_t CMN_UNUSED(index_cdg), const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    cmnThrow(std::out_of_range("cmnDataScalarDescription: osa1394 index out of range"));
    return "";
}
double osa1394::Scalar(const size_t CMN_UNUSED(index_cdg)) const CISST_THROW(std::out_of_range) {
    cmnThrow(std::out_of_range("cmnDataScalar: osa1394 index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<osa1394 >::SerializeText(const osa1394 & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void osa1394::SerializeTextJSON(Json::Value & CMN_UNUSED(jsonValue)) const {
}
template<>
void cmnDataJSON<osa1394 >::DeSerializeText(osa1394 & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void osa1394::DeSerializeTextJSON(const Json::Value & CMN_UNUSED(jsonValue)) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_osa1394_hardware_t(const osa1394::hardware_t & data) {
    switch (data) {
        case osa1394::HARDWARE_UNDEFINED:
            return "Undefined";
            break;
        case osa1394::QLA1:
            return "QLA1";
            break;
        case osa1394::DQLA:
            return "DQLA";
            break;
        case osa1394::dRA1:
            return "dRA1";
            break;
        default: return "undefined enum osa1394::hardware_t";
            break;
    }
}

std::string osa1394::hardware_tToString(const osa1394::hardware_t & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case osa1394::HARDWARE_UNDEFINED:
            return "HARDWARE_UNDEFINED";
            break;
        case osa1394::QLA1:
            return "QLA1";
            break;
        case osa1394::DQLA:
            return "DQLA";
            break;
        case osa1394::dRA1:
            return "dRA1";
            break;
        default:
            break;
    }
    cmnThrow("osa1394::hardware_tToString called with invalid enum");
    return "";
}

osa1394::hardware_t osa1394::hardware_tFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "HARDWARE_UNDEFINED") {
        return osa1394::HARDWARE_UNDEFINED;
    };
    if (value == "QLA1") {
        return osa1394::QLA1;
    };
    if (value == "DQLA") {
        return osa1394::DQLA;
    };
    if (value == "dRA1") {
        return osa1394::dRA1;
    };
    std::string message = "osa1394::hardware_tFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = hardware_tVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<osa1394::hardware_t >(0);
}

const std::vector<int> & osa1394::hardware_tVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(HARDWARE_UNDEFINED));
        vectorInt.push_back(static_cast<int>(QLA1));
        vectorInt.push_back(static_cast<int>(DQLA));
        vectorInt.push_back(static_cast<int>(dRA1));
    }
    return vectorInt;
}

const std::vector<std::string> & osa1394::hardware_tVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("HARDWARE_UNDEFINED");
        vectorString.push_back("QLA1");
        vectorString.push_back("DQLA");
        vectorString.push_back("dRA1");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(osa1394::hardware_t, osa1394::hardware_tToString, osa1394::hardware_tFromString);
#endif // CISST_HAS_JSON

/* source line: 262 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaPotentiometers1394ConfigurationProxy);

sawRobotIO1394::osaPotentiometers1394Configuration::osaPotentiometers1394Configuration(void):
    potentiometers_type()
    , tolerances(std::vector<osaPotentiometerTolerance1394Configuration>())
    , coupling(prmActuatorJointCoupling())
    , lookup_table_file("")
{}

sawRobotIO1394::osaPotentiometers1394Configuration::osaPotentiometers1394Configuration(const osaPotentiometers1394Configuration & other):
    potentiometers_type(other.potentiometers_type)
    , tolerances(other.tolerances)
    , coupling(other.coupling)
    , lookup_table_file(other.lookup_table_file)
{}

sawRobotIO1394::osaPotentiometers1394Configuration & sawRobotIO1394::osaPotentiometers1394Configuration::operator = (const osaPotentiometers1394Configuration & other)
{
    potentiometers_type = other.potentiometers_type;
    tolerances = other.tolerances;
    coupling = other.coupling;
    lookup_table_file = other.lookup_table_file;
    return *this;
}

sawRobotIO1394::osaPotentiometers1394Configuration::~osaPotentiometers1394Configuration(void){}


void sawRobotIO1394::osaPotentiometers1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->potentiometers_type);
    cmnSerializeRaw(outputStream__cdg, this->tolerances);
    cmnSerializeRaw(outputStream__cdg, this->coupling);
    cmnSerializeRaw(outputStream__cdg, this->lookup_table_file);
}


void sawRobotIO1394::osaPotentiometers1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->potentiometers_type);
    cmnDeSerializeRaw(inputStream__cdg, this->tolerances);
    cmnDeSerializeRaw(inputStream__cdg, this->coupling);
    cmnDeSerializeRaw(inputStream__cdg, this->lookup_table_file);
}


void sawRobotIO1394::osaPotentiometers1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaPotentiometers1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaPotentiometers1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaPotentiometers1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 285 */
/* source line: 290 */
/* source line: 296 */
/* source line: 303 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPotentiometers1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPotentiometers1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaPotentiometers1394Configuration::Copy(const sawRobotIO1394::osaPotentiometers1394Configuration & source__cdg) {
    cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::Copy(this->potentiometers_type, source__cdg.potentiometers_type);
    cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::Copy(this->tolerances, source__cdg.tolerances);
    cmnData<prmActuatorJointCoupling >::Copy(this->coupling, source__cdg.coupling);
    cmnData<std::string >::Copy(this->lookup_table_file, source__cdg.lookup_table_file);
}
void sawRobotIO1394::osaPotentiometers1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::SerializeBinary(this->potentiometers_type, outputStream__cdg);
    cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::SerializeBinary(this->tolerances, outputStream__cdg);
    cmnData<prmActuatorJointCoupling >::SerializeBinary(this->coupling, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->lookup_table_file, outputStream__cdg);
}
void sawRobotIO1394::osaPotentiometers1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::DeSerializeBinary(this->potentiometers_type, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::DeSerializeBinary(this->tolerances, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmActuatorJointCoupling >::DeSerializeBinary(this->coupling, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->lookup_table_file, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaPotentiometers1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::SerializeText(this->potentiometers_type, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::SerializeText(this->tolerances, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmActuatorJointCoupling >::SerializeText(this->coupling, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->lookup_table_file, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPotentiometers1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::SerializeDescription(this->potentiometers_type, delimiter__cdg, prefix__cdg + "potentiometers_type");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::SerializeDescription(this->tolerances, delimiter__cdg, prefix__cdg + "tolerances");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmActuatorJointCoupling >::SerializeDescription(this->coupling, delimiter__cdg, prefix__cdg + "coupling");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->lookup_table_file, delimiter__cdg, prefix__cdg + "lookup_table_file");
    return description__cdg.str();
}
void sawRobotIO1394::osaPotentiometers1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotentiometers1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::DeSerializeText(this->potentiometers_type, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotentiometers1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::DeSerializeText(this->tolerances, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotentiometers1394Configuration");
    }
    someData__cdg = true;
    cmnData<prmActuatorJointCoupling >::DeSerializeText(this->coupling, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotentiometers1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->lookup_table_file, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPotentiometers1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaPotentiometers1394Configuration" << std::endl;
    description__cdg << "  potentiometers_type:" << cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::HumanReadable(this->potentiometers_type);
    description__cdg << "  tolerances:" << cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::HumanReadable(this->tolerances);
    description__cdg << "  coupling:" << cmnData<prmActuatorJointCoupling >::HumanReadable(this->coupling);
    description__cdg << "  lookup_table_file:" << cmnData<std::string >::HumanReadable(this->lookup_table_file);
    return description__cdg.str();
}
bool sawRobotIO1394::osaPotentiometers1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::ScalarNumberIsFixed(this->potentiometers_type)
           && cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::ScalarNumberIsFixed(this->tolerances)
           && cmnData<prmActuatorJointCoupling >::ScalarNumberIsFixed(this->coupling)
           && cmnData<std::string >::ScalarNumberIsFixed(this->lookup_table_file)
    ;
}
size_t sawRobotIO1394::osaPotentiometers1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::ScalarNumber(this->potentiometers_type)
           + cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::ScalarNumber(this->tolerances)
           + cmnData<prmActuatorJointCoupling >::ScalarNumber(this->coupling)
           + cmnData<std::string >::ScalarNumber(this->lookup_table_file)
    ;
}
std::string sawRobotIO1394::osaPotentiometers1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::ScalarNumber(this->potentiometers_type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::ScalarDescription(this->potentiometers_type, index_cdg - baseIndex__cdg, prefix__cdg + "potentiometers_type");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::ScalarNumber(this->tolerances);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::ScalarDescription(this->tolerances, index_cdg - baseIndex__cdg, prefix__cdg + "tolerances");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmActuatorJointCoupling >::ScalarNumber(this->coupling);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmActuatorJointCoupling >::ScalarDescription(this->coupling, index_cdg - baseIndex__cdg, prefix__cdg + "coupling");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->lookup_table_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->lookup_table_file, index_cdg - baseIndex__cdg, prefix__cdg + "lookup_table_file");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaPotentiometers1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaPotentiometers1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::ScalarNumber(this->potentiometers_type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPotentiometers1394Configuration::potentiometer_type_t >::Scalar(this->potentiometers_type, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::ScalarNumber(this->tolerances);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaPotentiometerTolerance1394Configuration> >::Scalar(this->tolerances, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmActuatorJointCoupling >::ScalarNumber(this->coupling);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmActuatorJointCoupling >::Scalar(this->coupling, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->lookup_table_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->lookup_table_file, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaPotentiometers1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaPotentiometers1394Configuration >::SerializeText(const sawRobotIO1394::osaPotentiometers1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPotentiometers1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<osaPotentiometers1394Configuration::potentiometer_type_t >::SerializeText(this->potentiometers_type, jsonValue["potentiometers_type"]);
    cmnDataJSON<std::vector<osaPotentiometerTolerance1394Configuration> >::SerializeText(this->tolerances, jsonValue["tolerances"]);
    cmnDataJSON<prmActuatorJointCoupling >::SerializeText(this->coupling, jsonValue["coupling"]);
    cmnDataJSON<std::string >::SerializeText(this->lookup_table_file, jsonValue["lookup_table_file"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaPotentiometers1394Configuration >::DeSerializeText(sawRobotIO1394::osaPotentiometers1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPotentiometers1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["potentiometers_type"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaPotentiometers1394Configuration::potentiometer_type_t >::DeSerializeText(this->potentiometers_type, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < potentiometers_type");
        }
    } else {
        cmnThrow("cmnDataJson<osaPotentiometers1394Configuration::potentiometer_type_t>::DeSerializeText: empty JSON value for: potentiometers_type");
    };
    field__cdg = jsonValue["tolerances"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<osaPotentiometerTolerance1394Configuration> >::DeSerializeText(this->tolerances, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < tolerances");
        }
    };
    field__cdg = jsonValue["coupling"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<prmActuatorJointCoupling >::DeSerializeText(this->coupling, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < coupling");
        }
    };
    field__cdg = jsonValue["lookup_table_file"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->lookup_table_file, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < lookup_table_file");
        }
    };
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_sawRobotIO1394__osaPotentiometers1394Configuration_potentiometer_type_t(const sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_t & data) {
    switch (data) {
        case sawRobotIO1394::osaPotentiometers1394Configuration::UNDEFINED:
            return "undefined";
            break;
        case sawRobotIO1394::osaPotentiometers1394Configuration::NONE:
            return "none";
            break;
        case sawRobotIO1394::osaPotentiometers1394Configuration::ANALOG:
            return "analog";
            break;
        case sawRobotIO1394::osaPotentiometers1394Configuration::DIGITAL:
            return "digital";
            break;
        default: return "undefined enum sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_t";
            break;
    }
}

std::string sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_tToString(const sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_t & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case sawRobotIO1394::osaPotentiometers1394Configuration::UNDEFINED:
            return "UNDEFINED";
            break;
        case sawRobotIO1394::osaPotentiometers1394Configuration::NONE:
            return "NONE";
            break;
        case sawRobotIO1394::osaPotentiometers1394Configuration::ANALOG:
            return "ANALOG";
            break;
        case sawRobotIO1394::osaPotentiometers1394Configuration::DIGITAL:
            return "DIGITAL";
            break;
        default:
            break;
    }
    cmnThrow("sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_tToString called with invalid enum");
    return "";
}

sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_t sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_tFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "UNDEFINED") {
        return sawRobotIO1394::osaPotentiometers1394Configuration::UNDEFINED;
    };
    if (value == "NONE") {
        return sawRobotIO1394::osaPotentiometers1394Configuration::NONE;
    };
    if (value == "ANALOG") {
        return sawRobotIO1394::osaPotentiometers1394Configuration::ANALOG;
    };
    if (value == "DIGITAL") {
        return sawRobotIO1394::osaPotentiometers1394Configuration::DIGITAL;
    };
    std::string message = "sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_tFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = potentiometer_type_tVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_t >(0);
}

const std::vector<int> & sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_tVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(UNDEFINED));
        vectorInt.push_back(static_cast<int>(NONE));
        vectorInt.push_back(static_cast<int>(ANALOG));
        vectorInt.push_back(static_cast<int>(DIGITAL));
    }
    return vectorInt;
}

const std::vector<std::string> & sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_tVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("UNDEFINED");
        vectorString.push_back("NONE");
        vectorString.push_back("ANALOG");
        vectorString.push_back("DIGITAL");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_t, sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_tToString, sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_tFromString);
#endif // CISST_HAS_JSON

/* source line: 311 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaRobot1394ConfigurationProxy);

sawRobotIO1394::osaRobot1394Configuration::osaRobot1394Configuration(void):
    name()
    , hardware_version(osa1394::HARDWARE_UNDEFINED)
    , serial_number()
    , path(std::vector<std::string>())
    , only_IO(false)
    , has_encoder_preload(false)
    , number_of_actuators()
    , actuators()
    , number_of_brakes()
    , brakes(std::vector<osaBrake1394Configuration>())
    , potentiometers(osaPotentiometers1394Configuration())
{}

sawRobotIO1394::osaRobot1394Configuration::osaRobot1394Configuration(const osaRobot1394Configuration & other):
    name(other.name)
    , hardware_version(other.hardware_version)
    , serial_number(other.serial_number)
    , path(other.path)
    , only_IO(other.only_IO)
    , has_encoder_preload(other.has_encoder_preload)
    , number_of_actuators(other.number_of_actuators)
    , actuators(other.actuators)
    , number_of_brakes(other.number_of_brakes)
    , brakes(other.brakes)
    , potentiometers(other.potentiometers)
{}

sawRobotIO1394::osaRobot1394Configuration & sawRobotIO1394::osaRobot1394Configuration::operator = (const osaRobot1394Configuration & other)
{
    name = other.name;
    hardware_version = other.hardware_version;
    serial_number = other.serial_number;
    path = other.path;
    only_IO = other.only_IO;
    has_encoder_preload = other.has_encoder_preload;
    number_of_actuators = other.number_of_actuators;
    actuators = other.actuators;
    number_of_brakes = other.number_of_brakes;
    brakes = other.brakes;
    potentiometers = other.potentiometers;
    return *this;
}

sawRobotIO1394::osaRobot1394Configuration::~osaRobot1394Configuration(void){}


void sawRobotIO1394::osaRobot1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->name);
    cmnSerializeRaw(outputStream__cdg, this->hardware_version);
    cmnSerializeRaw(outputStream__cdg, this->serial_number);
    cmnSerializeRaw(outputStream__cdg, this->path);
    cmnSerializeRaw(outputStream__cdg, this->only_IO);
    cmnSerializeRaw(outputStream__cdg, this->has_encoder_preload);
    cmnSerializeSizeRaw(outputStream__cdg, this->number_of_actuators);
    cmnSerializeRaw(outputStream__cdg, this->actuators);
    cmnSerializeSizeRaw(outputStream__cdg, this->number_of_brakes);
    cmnSerializeRaw(outputStream__cdg, this->brakes);
    cmnSerializeRaw(outputStream__cdg, this->potentiometers);
}


void sawRobotIO1394::osaRobot1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->name);
    cmnDeSerializeRaw(inputStream__cdg, this->hardware_version);
    cmnDeSerializeRaw(inputStream__cdg, this->serial_number);
    cmnDeSerializeRaw(inputStream__cdg, this->path);
    cmnDeSerializeRaw(inputStream__cdg, this->only_IO);
    cmnDeSerializeRaw(inputStream__cdg, this->has_encoder_preload);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->number_of_actuators);
    cmnDeSerializeRaw(inputStream__cdg, this->actuators);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->number_of_brakes);
    cmnDeSerializeRaw(inputStream__cdg, this->brakes);
    cmnDeSerializeRaw(inputStream__cdg, this->potentiometers);
}


void sawRobotIO1394::osaRobot1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaRobot1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaRobot1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaRobot1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 316 */
/* source line: 321 */
/* source line: 327 */
/* source line: 332 */
/* source line: 338 */
/* source line: 344 */
/* source line: 350 */
/* source line: 355 */
/* source line: 360 */
/* source line: 365 */
/* source line: 371 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaRobot1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaRobot1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaRobot1394Configuration::Copy(const sawRobotIO1394::osaRobot1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->name, source__cdg.name);
    cmnData<osa1394::hardware_t >::Copy(this->hardware_version, source__cdg.hardware_version);
    cmnData<std::string >::Copy(this->serial_number, source__cdg.serial_number);
    cmnData<std::vector<std::string> >::Copy(this->path, source__cdg.path);
    cmnData<bool >::Copy(this->only_IO, source__cdg.only_IO);
    cmnData<bool >::Copy(this->has_encoder_preload, source__cdg.has_encoder_preload);
    cmnData<size_t >::Copy(this->number_of_actuators, source__cdg.number_of_actuators);
    cmnData<std::vector<osaActuator1394Configuration> >::Copy(this->actuators, source__cdg.actuators);
    cmnData<size_t >::Copy(this->number_of_brakes, source__cdg.number_of_brakes);
    cmnData<std::vector<osaBrake1394Configuration> >::Copy(this->brakes, source__cdg.brakes);
    cmnData<osaPotentiometers1394Configuration >::Copy(this->potentiometers, source__cdg.potentiometers);
}
void sawRobotIO1394::osaRobot1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->name, outputStream__cdg);
    cmnData<osa1394::hardware_t >::SerializeBinary(this->hardware_version, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->serial_number, outputStream__cdg);
    cmnData<std::vector<std::string> >::SerializeBinary(this->path, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->only_IO, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->has_encoder_preload, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->number_of_actuators, outputStream__cdg);
    cmnData<std::vector<osaActuator1394Configuration> >::SerializeBinary(this->actuators, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->number_of_brakes, outputStream__cdg);
    cmnData<std::vector<osaBrake1394Configuration> >::SerializeBinary(this->brakes, outputStream__cdg);
    cmnData<osaPotentiometers1394Configuration >::SerializeBinary(this->potentiometers, outputStream__cdg);
}
void sawRobotIO1394::osaRobot1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osa1394::hardware_t >::DeSerializeBinary(this->hardware_version, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->serial_number, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->path, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->only_IO, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->has_encoder_preload, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->number_of_actuators, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaActuator1394Configuration> >::DeSerializeBinary(this->actuators, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->number_of_brakes, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaBrake1394Configuration> >::DeSerializeBinary(this->brakes, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaPotentiometers1394Configuration >::DeSerializeBinary(this->potentiometers, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaRobot1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osa1394::hardware_t >::SerializeText(this->hardware_version, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->serial_number, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::SerializeText(this->path, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->only_IO, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->has_encoder_preload, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->number_of_actuators, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaActuator1394Configuration> >::SerializeText(this->actuators, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->number_of_brakes, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaBrake1394Configuration> >::SerializeText(this->brakes, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaPotentiometers1394Configuration >::SerializeText(this->potentiometers, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaRobot1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->name, delimiter__cdg, prefix__cdg + "name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osa1394::hardware_t >::SerializeDescription(this->hardware_version, delimiter__cdg, prefix__cdg + "hardware_version");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->serial_number, delimiter__cdg, prefix__cdg + "serial_number");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<std::string> >::SerializeDescription(this->path, delimiter__cdg, prefix__cdg + "path");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->only_IO, delimiter__cdg, prefix__cdg + "only_IO");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->has_encoder_preload, delimiter__cdg, prefix__cdg + "has_encoder_preload");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->number_of_actuators, delimiter__cdg, prefix__cdg + "number_of_actuators");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaActuator1394Configuration> >::SerializeDescription(this->actuators, delimiter__cdg, prefix__cdg + "actuators");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->number_of_brakes, delimiter__cdg, prefix__cdg + "number_of_brakes");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaBrake1394Configuration> >::SerializeDescription(this->brakes, delimiter__cdg, prefix__cdg + "brakes");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaPotentiometers1394Configuration >::SerializeDescription(this->potentiometers, delimiter__cdg, prefix__cdg + "potentiometers");
    return description__cdg.str();
}
void sawRobotIO1394::osaRobot1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<osa1394::hardware_t >::DeSerializeText(this->hardware_version, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->serial_number, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->path, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->only_IO, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->has_encoder_preload, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->number_of_actuators, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaActuator1394Configuration> >::DeSerializeText(this->actuators, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->number_of_brakes, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaBrake1394Configuration> >::DeSerializeText(this->brakes, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaPotentiometers1394Configuration >::DeSerializeText(this->potentiometers, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaRobot1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaRobot1394Configuration" << std::endl;
    description__cdg << "  name:" << cmnData<std::string >::HumanReadable(this->name);
    description__cdg << "  hardware_version:" << cmnData<osa1394::hardware_t >::HumanReadable(this->hardware_version);
    description__cdg << "  serial_number:" << cmnData<std::string >::HumanReadable(this->serial_number);
    description__cdg << "  path:" << cmnData<std::vector<std::string> >::HumanReadable(this->path);
    description__cdg << "  only_IO:" << cmnData<bool >::HumanReadable(this->only_IO);
    description__cdg << "  has_encoder_preload:" << cmnData<bool >::HumanReadable(this->has_encoder_preload);
    description__cdg << "  number_of_actuators:" << cmnData<size_t >::HumanReadable(this->number_of_actuators);
    description__cdg << "  actuators:" << cmnData<std::vector<osaActuator1394Configuration> >::HumanReadable(this->actuators);
    description__cdg << "  number_of_brakes:" << cmnData<size_t >::HumanReadable(this->number_of_brakes);
    description__cdg << "  brakes:" << cmnData<std::vector<osaBrake1394Configuration> >::HumanReadable(this->brakes);
    description__cdg << "  potentiometers:" << cmnData<osaPotentiometers1394Configuration >::HumanReadable(this->potentiometers);
    return description__cdg.str();
}
bool sawRobotIO1394::osaRobot1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->name)
           && cmnData<osa1394::hardware_t >::ScalarNumberIsFixed(this->hardware_version)
           && cmnData<std::string >::ScalarNumberIsFixed(this->serial_number)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->path)
           && cmnData<bool >::ScalarNumberIsFixed(this->only_IO)
           && cmnData<bool >::ScalarNumberIsFixed(this->has_encoder_preload)
           && cmnData<size_t >::ScalarNumberIsFixed(this->number_of_actuators)
           && cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumberIsFixed(this->actuators)
           && cmnData<size_t >::ScalarNumberIsFixed(this->number_of_brakes)
           && cmnData<std::vector<osaBrake1394Configuration> >::ScalarNumberIsFixed(this->brakes)
           && cmnData<osaPotentiometers1394Configuration >::ScalarNumberIsFixed(this->potentiometers)
    ;
}
size_t sawRobotIO1394::osaRobot1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->name)
           + cmnData<osa1394::hardware_t >::ScalarNumber(this->hardware_version)
           + cmnData<std::string >::ScalarNumber(this->serial_number)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->path)
           + cmnData<bool >::ScalarNumber(this->only_IO)
           + cmnData<bool >::ScalarNumber(this->has_encoder_preload)
           + cmnData<size_t >::ScalarNumber(this->number_of_actuators)
           + cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumber(this->actuators)
           + cmnData<size_t >::ScalarNumber(this->number_of_brakes)
           + cmnData<std::vector<osaBrake1394Configuration> >::ScalarNumber(this->brakes)
           + cmnData<osaPotentiometers1394Configuration >::ScalarNumber(this->potentiometers)
    ;
}
std::string sawRobotIO1394::osaRobot1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->name, index_cdg - baseIndex__cdg, prefix__cdg + "name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osa1394::hardware_t >::ScalarNumber(this->hardware_version);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osa1394::hardware_t >::ScalarDescription(this->hardware_version, index_cdg - baseIndex__cdg, prefix__cdg + "hardware_version");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->serial_number);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->serial_number, index_cdg - baseIndex__cdg, prefix__cdg + "serial_number");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->path);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->path, index_cdg - baseIndex__cdg, prefix__cdg + "path");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->only_IO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->only_IO, index_cdg - baseIndex__cdg, prefix__cdg + "only_IO");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->has_encoder_preload);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->has_encoder_preload, index_cdg - baseIndex__cdg, prefix__cdg + "has_encoder_preload");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->number_of_actuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->number_of_actuators, index_cdg - baseIndex__cdg, prefix__cdg + "number_of_actuators");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumber(this->actuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaActuator1394Configuration> >::ScalarDescription(this->actuators, index_cdg - baseIndex__cdg, prefix__cdg + "actuators");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->number_of_brakes);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->number_of_brakes, index_cdg - baseIndex__cdg, prefix__cdg + "number_of_brakes");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaBrake1394Configuration> >::ScalarNumber(this->brakes);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaBrake1394Configuration> >::ScalarDescription(this->brakes, index_cdg - baseIndex__cdg, prefix__cdg + "brakes");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaPotentiometers1394Configuration >::ScalarNumber(this->potentiometers);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPotentiometers1394Configuration >::ScalarDescription(this->potentiometers, index_cdg - baseIndex__cdg, prefix__cdg + "potentiometers");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaRobot1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaRobot1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osa1394::hardware_t >::ScalarNumber(this->hardware_version);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osa1394::hardware_t >::Scalar(this->hardware_version, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->serial_number);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->serial_number, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->path);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::Scalar(this->path, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->only_IO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->only_IO, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->has_encoder_preload);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->has_encoder_preload, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->number_of_actuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->number_of_actuators, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumber(this->actuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaActuator1394Configuration> >::Scalar(this->actuators, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->number_of_brakes);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->number_of_brakes, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaBrake1394Configuration> >::ScalarNumber(this->brakes);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaBrake1394Configuration> >::Scalar(this->brakes, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaPotentiometers1394Configuration >::ScalarNumber(this->potentiometers);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPotentiometers1394Configuration >::Scalar(this->potentiometers, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaRobot1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::SerializeText(const sawRobotIO1394::osaRobot1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaRobot1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<osa1394::hardware_t >::SerializeText(this->hardware_version, jsonValue["hardware_version"]);
    cmnDataJSON<std::string >::SerializeText(this->serial_number, jsonValue["serial_number"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->path, jsonValue["path"]);
    cmnDataJSON<bool >::SerializeText(this->only_IO, jsonValue["only_IO"]);
    cmnDataJSON<bool >::SerializeText(this->has_encoder_preload, jsonValue["has_encoder_preload"]);
    cmnDataJSON<size_t >::SerializeText(this->number_of_actuators, jsonValue["number_of_actuators"]);
    cmnDataJSON<std::vector<osaActuator1394Configuration> >::SerializeText(this->actuators, jsonValue["actuators"]);
    cmnDataJSON<size_t >::SerializeText(this->number_of_brakes, jsonValue["number_of_brakes"]);
    cmnDataJSON<std::vector<osaBrake1394Configuration> >::SerializeText(this->brakes, jsonValue["brakes"]);
    cmnDataJSON<osaPotentiometers1394Configuration >::SerializeText(this->potentiometers, jsonValue["potentiometers"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::DeSerializeText(sawRobotIO1394::osaRobot1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaRobot1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["name"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->name, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < name");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: name");
    };
    field__cdg = jsonValue["hardware_version"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osa1394::hardware_t >::DeSerializeText(this->hardware_version, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < hardware_version");
        }
    };
    field__cdg = jsonValue["serial_number"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->serial_number, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < serial_number");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: serial_number");
    };
    field__cdg = jsonValue["path"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->path, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < path");
        }
    };
    field__cdg = jsonValue["only_IO"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->only_IO, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < only_IO");
        }
    };
    field__cdg = jsonValue["has_encoder_preload"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->has_encoder_preload, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < has_encoder_preload");
        }
    };
    field__cdg = jsonValue["number_of_actuators"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<size_t >::DeSerializeText(this->number_of_actuators, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < number_of_actuators");
        }
    } else {
        cmnThrow("cmnDataJson<size_t>::DeSerializeText: empty JSON value for: number_of_actuators");
    };
    field__cdg = jsonValue["actuators"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<osaActuator1394Configuration> >::DeSerializeText(this->actuators, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < actuators");
        }
    } else {
        cmnThrow("cmnDataJson<std::vector<osaActuator1394Configuration>>::DeSerializeText: empty JSON value for: actuators");
    };
    field__cdg = jsonValue["number_of_brakes"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<size_t >::DeSerializeText(this->number_of_brakes, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < number_of_brakes");
        }
    } else {
        cmnThrow("cmnDataJson<size_t>::DeSerializeText: empty JSON value for: number_of_brakes");
    };
    field__cdg = jsonValue["brakes"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<osaBrake1394Configuration> >::DeSerializeText(this->brakes, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < brakes");
        }
    };
    field__cdg = jsonValue["potentiometers"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<osaPotentiometers1394Configuration >::DeSerializeText(this->potentiometers, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < potentiometers");
        }
    };
}
#endif // CISST_HAS_JSON

/* source line: 379 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDigitalInput1394ConfigurationProxy);

sawRobotIO1394::osaDigitalInput1394Configuration::osaDigitalInput1394Configuration(void):
    name()
    , board_id()
    , bit_id()
    , trigger_when_pressed()
    , trigger_when_released()
    , pressed_value()
    , skip_first_run(false)
    , debounce_time(0.0)
    , debounce_time_click(0.0)
{}

sawRobotIO1394::osaDigitalInput1394Configuration::osaDigitalInput1394Configuration(const osaDigitalInput1394Configuration & other):
    name(other.name)
    , board_id(other.board_id)
    , bit_id(other.bit_id)
    , trigger_when_pressed(other.trigger_when_pressed)
    , trigger_when_released(other.trigger_when_released)
    , pressed_value(other.pressed_value)
    , skip_first_run(other.skip_first_run)
    , debounce_time(other.debounce_time)
    , debounce_time_click(other.debounce_time_click)
{}

sawRobotIO1394::osaDigitalInput1394Configuration & sawRobotIO1394::osaDigitalInput1394Configuration::operator = (const osaDigitalInput1394Configuration & other)
{
    name = other.name;
    board_id = other.board_id;
    bit_id = other.bit_id;
    trigger_when_pressed = other.trigger_when_pressed;
    trigger_when_released = other.trigger_when_released;
    pressed_value = other.pressed_value;
    skip_first_run = other.skip_first_run;
    debounce_time = other.debounce_time;
    debounce_time_click = other.debounce_time_click;
    return *this;
}

sawRobotIO1394::osaDigitalInput1394Configuration::~osaDigitalInput1394Configuration(void){}


void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->name);
    cmnSerializeRaw(outputStream__cdg, this->board_id);
    cmnSerializeRaw(outputStream__cdg, this->bit_id);
    cmnSerializeRaw(outputStream__cdg, this->trigger_when_pressed);
    cmnSerializeRaw(outputStream__cdg, this->trigger_when_released);
    cmnSerializeRaw(outputStream__cdg, this->pressed_value);
    cmnSerializeRaw(outputStream__cdg, this->skip_first_run);
    cmnSerializeRaw(outputStream__cdg, this->debounce_time);
    cmnSerializeRaw(outputStream__cdg, this->debounce_time_click);
}


void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->name);
    cmnDeSerializeRaw(inputStream__cdg, this->board_id);
    cmnDeSerializeRaw(inputStream__cdg, this->bit_id);
    cmnDeSerializeRaw(inputStream__cdg, this->trigger_when_pressed);
    cmnDeSerializeRaw(inputStream__cdg, this->trigger_when_released);
    cmnDeSerializeRaw(inputStream__cdg, this->pressed_value);
    cmnDeSerializeRaw(inputStream__cdg, this->skip_first_run);
    cmnDeSerializeRaw(inputStream__cdg, this->debounce_time);
    cmnDeSerializeRaw(inputStream__cdg, this->debounce_time_click);
}


void sawRobotIO1394::osaDigitalInput1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDigitalInput1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 383 */
/* source line: 388 */
/* source line: 393 */
/* source line: 398 */
/* source line: 403 */
/* source line: 408 */
/* source line: 413 */
/* source line: 419 */
/* source line: 425 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalInput1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalInput1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDigitalInput1394Configuration::Copy(const sawRobotIO1394::osaDigitalInput1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->name, source__cdg.name);
    cmnData<int >::Copy(this->board_id, source__cdg.board_id);
    cmnData<int >::Copy(this->bit_id, source__cdg.bit_id);
    cmnData<bool >::Copy(this->trigger_when_pressed, source__cdg.trigger_when_pressed);
    cmnData<bool >::Copy(this->trigger_when_released, source__cdg.trigger_when_released);
    cmnData<bool >::Copy(this->pressed_value, source__cdg.pressed_value);
    cmnData<bool >::Copy(this->skip_first_run, source__cdg.skip_first_run);
    cmnData<double >::Copy(this->debounce_time, source__cdg.debounce_time);
    cmnData<double >::Copy(this->debounce_time_click, source__cdg.debounce_time_click);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->name, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->board_id, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->bit_id, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->trigger_when_pressed, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->trigger_when_released, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->pressed_value, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->skip_first_run, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->debounce_time, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->debounce_time_click, outputStream__cdg);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->board_id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->bit_id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->trigger_when_pressed, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->trigger_when_released, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->pressed_value, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->skip_first_run, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->debounce_time, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->debounce_time_click, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->board_id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->bit_id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->trigger_when_pressed, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->trigger_when_released, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->pressed_value, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->skip_first_run, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->debounce_time, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->debounce_time_click, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalInput1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->name, delimiter__cdg, prefix__cdg + "name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->board_id, delimiter__cdg, prefix__cdg + "board_id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->bit_id, delimiter__cdg, prefix__cdg + "bit_id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->trigger_when_pressed, delimiter__cdg, prefix__cdg + "trigger_when_pressed");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->trigger_when_released, delimiter__cdg, prefix__cdg + "trigger_when_released");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->pressed_value, delimiter__cdg, prefix__cdg + "pressed_value");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->skip_first_run, delimiter__cdg, prefix__cdg + "skip_first_run");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->debounce_time, delimiter__cdg, prefix__cdg + "debounce_time");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->debounce_time_click, delimiter__cdg, prefix__cdg + "debounce_time_click");
    return description__cdg.str();
}
void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->board_id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->bit_id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->trigger_when_pressed, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->trigger_when_released, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->pressed_value, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->skip_first_run, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->debounce_time, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->debounce_time_click, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalInput1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDigitalInput1394Configuration" << std::endl;
    description__cdg << "  name:" << cmnData<std::string >::HumanReadable(this->name);
    description__cdg << "  board_id:" << cmnData<int >::HumanReadable(this->board_id);
    description__cdg << "  bit_id:" << cmnData<int >::HumanReadable(this->bit_id);
    description__cdg << "  trigger_when_pressed:" << cmnData<bool >::HumanReadable(this->trigger_when_pressed);
    description__cdg << "  trigger_when_released:" << cmnData<bool >::HumanReadable(this->trigger_when_released);
    description__cdg << "  pressed_value:" << cmnData<bool >::HumanReadable(this->pressed_value);
    description__cdg << "  skip_first_run:" << cmnData<bool >::HumanReadable(this->skip_first_run);
    description__cdg << "  debounce_time:" << cmnData<double >::HumanReadable(this->debounce_time);
    description__cdg << "  debounce_time_click:" << cmnData<double >::HumanReadable(this->debounce_time_click);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDigitalInput1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->name)
           && cmnData<int >::ScalarNumberIsFixed(this->board_id)
           && cmnData<int >::ScalarNumberIsFixed(this->bit_id)
           && cmnData<bool >::ScalarNumberIsFixed(this->trigger_when_pressed)
           && cmnData<bool >::ScalarNumberIsFixed(this->trigger_when_released)
           && cmnData<bool >::ScalarNumberIsFixed(this->pressed_value)
           && cmnData<bool >::ScalarNumberIsFixed(this->skip_first_run)
           && cmnData<double >::ScalarNumberIsFixed(this->debounce_time)
           && cmnData<double >::ScalarNumberIsFixed(this->debounce_time_click)
    ;
}
size_t sawRobotIO1394::osaDigitalInput1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->name)
           + cmnData<int >::ScalarNumber(this->board_id)
           + cmnData<int >::ScalarNumber(this->bit_id)
           + cmnData<bool >::ScalarNumber(this->trigger_when_pressed)
           + cmnData<bool >::ScalarNumber(this->trigger_when_released)
           + cmnData<bool >::ScalarNumber(this->pressed_value)
           + cmnData<bool >::ScalarNumber(this->skip_first_run)
           + cmnData<double >::ScalarNumber(this->debounce_time)
           + cmnData<double >::ScalarNumber(this->debounce_time_click)
    ;
}
std::string sawRobotIO1394::osaDigitalInput1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->name, index_cdg - baseIndex__cdg, prefix__cdg + "name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->board_id, index_cdg - baseIndex__cdg, prefix__cdg + "board_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->bit_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->bit_id, index_cdg - baseIndex__cdg, prefix__cdg + "bit_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->trigger_when_pressed);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->trigger_when_pressed, index_cdg - baseIndex__cdg, prefix__cdg + "trigger_when_pressed");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->trigger_when_released);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->trigger_when_released, index_cdg - baseIndex__cdg, prefix__cdg + "trigger_when_released");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->pressed_value);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->pressed_value, index_cdg - baseIndex__cdg, prefix__cdg + "pressed_value");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->skip_first_run);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->skip_first_run, index_cdg - baseIndex__cdg, prefix__cdg + "skip_first_run");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->debounce_time);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->debounce_time, index_cdg - baseIndex__cdg, prefix__cdg + "debounce_time");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->debounce_time_click);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->debounce_time_click, index_cdg - baseIndex__cdg, prefix__cdg + "debounce_time_click");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDigitalInput1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDigitalInput1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->board_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->bit_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->bit_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->trigger_when_pressed);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->trigger_when_pressed, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->trigger_when_released);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->trigger_when_released, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->pressed_value);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->pressed_value, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->skip_first_run);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->skip_first_run, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->debounce_time);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->debounce_time, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->debounce_time_click);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->debounce_time_click, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDigitalInput1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalInput1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<int >::SerializeText(this->board_id, jsonValue["board_id"]);
    cmnDataJSON<int >::SerializeText(this->bit_id, jsonValue["bit_id"]);
    cmnDataJSON<bool >::SerializeText(this->trigger_when_pressed, jsonValue["trigger_when_pressed"]);
    cmnDataJSON<bool >::SerializeText(this->trigger_when_released, jsonValue["trigger_when_released"]);
    cmnDataJSON<bool >::SerializeText(this->pressed_value, jsonValue["pressed_value"]);
    cmnDataJSON<bool >::SerializeText(this->skip_first_run, jsonValue["skip_first_run"]);
    cmnDataJSON<double >::SerializeText(this->debounce_time, jsonValue["debounce_time"]);
    cmnDataJSON<double >::SerializeText(this->debounce_time_click, jsonValue["debounce_time_click"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalInput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["name"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->name, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < name");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: name");
    };
    field__cdg = jsonValue["board_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->board_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < board_id");
        }
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: board_id");
    };
    field__cdg = jsonValue["bit_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->bit_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < bit_id");
        }
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: bit_id");
    };
    field__cdg = jsonValue["trigger_when_pressed"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->trigger_when_pressed, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < trigger_when_pressed");
        }
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: trigger_when_pressed");
    };
    field__cdg = jsonValue["trigger_when_released"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->trigger_when_released, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < trigger_when_released");
        }
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: trigger_when_released");
    };
    field__cdg = jsonValue["pressed_value"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->pressed_value, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < pressed_value");
        }
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: pressed_value");
    };
    field__cdg = jsonValue["skip_first_run"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->skip_first_run, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < skip_first_run");
        }
    };
    field__cdg = jsonValue["debounce_time"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->debounce_time, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < debounce_time");
        }
    };
    field__cdg = jsonValue["debounce_time_click"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->debounce_time_click, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < debounce_time_click");
        }
    };
}
#endif // CISST_HAS_JSON

/* source line: 433 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDigitalOutput1394ConfigurationProxy);

sawRobotIO1394::osaDigitalOutput1394Configuration::osaDigitalOutput1394Configuration(void):
    name()
    , board_id()
    , bit_id()
    , high_duration(0.0)
    , low_duration(0.0)
    , is_PWM(false)
    , PWM_frequency(0.0)
{}

sawRobotIO1394::osaDigitalOutput1394Configuration::osaDigitalOutput1394Configuration(const osaDigitalOutput1394Configuration & other):
    name(other.name)
    , board_id(other.board_id)
    , bit_id(other.bit_id)
    , high_duration(other.high_duration)
    , low_duration(other.low_duration)
    , is_PWM(other.is_PWM)
    , PWM_frequency(other.PWM_frequency)
{}

sawRobotIO1394::osaDigitalOutput1394Configuration & sawRobotIO1394::osaDigitalOutput1394Configuration::operator = (const osaDigitalOutput1394Configuration & other)
{
    name = other.name;
    board_id = other.board_id;
    bit_id = other.bit_id;
    high_duration = other.high_duration;
    low_duration = other.low_duration;
    is_PWM = other.is_PWM;
    PWM_frequency = other.PWM_frequency;
    return *this;
}

sawRobotIO1394::osaDigitalOutput1394Configuration::~osaDigitalOutput1394Configuration(void){}


void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->name);
    cmnSerializeRaw(outputStream__cdg, this->board_id);
    cmnSerializeRaw(outputStream__cdg, this->bit_id);
    cmnSerializeRaw(outputStream__cdg, this->high_duration);
    cmnSerializeRaw(outputStream__cdg, this->low_duration);
    cmnSerializeRaw(outputStream__cdg, this->is_PWM);
    cmnSerializeRaw(outputStream__cdg, this->PWM_frequency);
}


void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->name);
    cmnDeSerializeRaw(inputStream__cdg, this->board_id);
    cmnDeSerializeRaw(inputStream__cdg, this->bit_id);
    cmnDeSerializeRaw(inputStream__cdg, this->high_duration);
    cmnDeSerializeRaw(inputStream__cdg, this->low_duration);
    cmnDeSerializeRaw(inputStream__cdg, this->is_PWM);
    cmnDeSerializeRaw(inputStream__cdg, this->PWM_frequency);
}


void sawRobotIO1394::osaDigitalOutput1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDigitalOutput1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 437 */
/* source line: 442 */
/* source line: 447 */
/* source line: 452 */
/* source line: 458 */
/* source line: 464 */
/* source line: 470 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalOutput1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalOutput1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDigitalOutput1394Configuration::Copy(const sawRobotIO1394::osaDigitalOutput1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->name, source__cdg.name);
    cmnData<int >::Copy(this->board_id, source__cdg.board_id);
    cmnData<int >::Copy(this->bit_id, source__cdg.bit_id);
    cmnData<double >::Copy(this->high_duration, source__cdg.high_duration);
    cmnData<double >::Copy(this->low_duration, source__cdg.low_duration);
    cmnData<bool >::Copy(this->is_PWM, source__cdg.is_PWM);
    cmnData<double >::Copy(this->PWM_frequency, source__cdg.PWM_frequency);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->name, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->board_id, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->bit_id, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->high_duration, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->low_duration, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->is_PWM, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->PWM_frequency, outputStream__cdg);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->board_id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->bit_id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->high_duration, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->low_duration, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->is_PWM, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->PWM_frequency, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->board_id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->bit_id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->high_duration, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->low_duration, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->is_PWM, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->PWM_frequency, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->name, delimiter__cdg, prefix__cdg + "name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->board_id, delimiter__cdg, prefix__cdg + "board_id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->bit_id, delimiter__cdg, prefix__cdg + "bit_id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->high_duration, delimiter__cdg, prefix__cdg + "high_duration");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->low_duration, delimiter__cdg, prefix__cdg + "low_duration");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->is_PWM, delimiter__cdg, prefix__cdg + "is_PWM");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->PWM_frequency, delimiter__cdg, prefix__cdg + "PWM_frequency");
    return description__cdg.str();
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->board_id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->bit_id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->high_duration, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->low_duration, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->is_PWM, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->PWM_frequency, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalOutput1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDigitalOutput1394Configuration" << std::endl;
    description__cdg << "  name:" << cmnData<std::string >::HumanReadable(this->name);
    description__cdg << "  board_id:" << cmnData<int >::HumanReadable(this->board_id);
    description__cdg << "  bit_id:" << cmnData<int >::HumanReadable(this->bit_id);
    description__cdg << "  high_duration:" << cmnData<double >::HumanReadable(this->high_duration);
    description__cdg << "  low_duration:" << cmnData<double >::HumanReadable(this->low_duration);
    description__cdg << "  is_PWM:" << cmnData<bool >::HumanReadable(this->is_PWM);
    description__cdg << "  PWM_frequency:" << cmnData<double >::HumanReadable(this->PWM_frequency);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDigitalOutput1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->name)
           && cmnData<int >::ScalarNumberIsFixed(this->board_id)
           && cmnData<int >::ScalarNumberIsFixed(this->bit_id)
           && cmnData<double >::ScalarNumberIsFixed(this->high_duration)
           && cmnData<double >::ScalarNumberIsFixed(this->low_duration)
           && cmnData<bool >::ScalarNumberIsFixed(this->is_PWM)
           && cmnData<double >::ScalarNumberIsFixed(this->PWM_frequency)
    ;
}
size_t sawRobotIO1394::osaDigitalOutput1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->name)
           + cmnData<int >::ScalarNumber(this->board_id)
           + cmnData<int >::ScalarNumber(this->bit_id)
           + cmnData<double >::ScalarNumber(this->high_duration)
           + cmnData<double >::ScalarNumber(this->low_duration)
           + cmnData<bool >::ScalarNumber(this->is_PWM)
           + cmnData<double >::ScalarNumber(this->PWM_frequency)
    ;
}
std::string sawRobotIO1394::osaDigitalOutput1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->name, index_cdg - baseIndex__cdg, prefix__cdg + "name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->board_id, index_cdg - baseIndex__cdg, prefix__cdg + "board_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->bit_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->bit_id, index_cdg - baseIndex__cdg, prefix__cdg + "bit_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->high_duration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->high_duration, index_cdg - baseIndex__cdg, prefix__cdg + "high_duration");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->low_duration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->low_duration, index_cdg - baseIndex__cdg, prefix__cdg + "low_duration");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->is_PWM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->is_PWM, index_cdg - baseIndex__cdg, prefix__cdg + "is_PWM");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->PWM_frequency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->PWM_frequency, index_cdg - baseIndex__cdg, prefix__cdg + "PWM_frequency");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDigitalOutput1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDigitalOutput1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->board_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->bit_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->bit_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->high_duration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->high_duration, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->low_duration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->low_duration, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->is_PWM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->is_PWM, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->PWM_frequency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->PWM_frequency, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDigitalOutput1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalOutput1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<int >::SerializeText(this->board_id, jsonValue["board_id"]);
    cmnDataJSON<int >::SerializeText(this->bit_id, jsonValue["bit_id"]);
    cmnDataJSON<double >::SerializeText(this->high_duration, jsonValue["high_duration"]);
    cmnDataJSON<double >::SerializeText(this->low_duration, jsonValue["low_duration"]);
    cmnDataJSON<bool >::SerializeText(this->is_PWM, jsonValue["is_PWM"]);
    cmnDataJSON<double >::SerializeText(this->PWM_frequency, jsonValue["PWM_frequency"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalOutput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["name"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->name, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < name");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: name");
    };
    field__cdg = jsonValue["board_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->board_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < board_id");
        }
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: board_id");
    };
    field__cdg = jsonValue["bit_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->bit_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < bit_id");
        }
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: bit_id");
    };
    field__cdg = jsonValue["high_duration"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->high_duration, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < high_duration");
        }
    };
    field__cdg = jsonValue["low_duration"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->low_duration, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < low_duration");
        }
    };
    field__cdg = jsonValue["is_PWM"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->is_PWM, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < is_PWM");
        }
    };
    field__cdg = jsonValue["PWM_frequency"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->PWM_frequency, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < PWM_frequency");
        }
    };
}
#endif // CISST_HAS_JSON

/* source line: 478 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDallasChip1394ConfigurationProxy);

sawRobotIO1394::osaDallasChip1394Configuration::osaDallasChip1394Configuration(void):
    name()
    , board_id()
{}

sawRobotIO1394::osaDallasChip1394Configuration::osaDallasChip1394Configuration(const osaDallasChip1394Configuration & other):
    name(other.name)
    , board_id(other.board_id)
{}

sawRobotIO1394::osaDallasChip1394Configuration & sawRobotIO1394::osaDallasChip1394Configuration::operator = (const osaDallasChip1394Configuration & other)
{
    name = other.name;
    board_id = other.board_id;
    return *this;
}

sawRobotIO1394::osaDallasChip1394Configuration::~osaDallasChip1394Configuration(void){}


void sawRobotIO1394::osaDallasChip1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->name);
    cmnSerializeRaw(outputStream__cdg, this->board_id);
}


void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->name);
    cmnDeSerializeRaw(inputStream__cdg, this->board_id);
}


void sawRobotIO1394::osaDallasChip1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDallasChip1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 482 */
/* source line: 487 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDallasChip1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDallasChip1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDallasChip1394Configuration::Copy(const sawRobotIO1394::osaDallasChip1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->name, source__cdg.name);
    cmnData<int >::Copy(this->board_id, source__cdg.board_id);
}
void sawRobotIO1394::osaDallasChip1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->name, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->board_id, outputStream__cdg);
}
void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->board_id, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDallasChip1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->board_id, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDallasChip1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->name, delimiter__cdg, prefix__cdg + "name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->board_id, delimiter__cdg, prefix__cdg + "board_id");
    return description__cdg.str();
}
void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDallasChip1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDallasChip1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->board_id, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDallasChip1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDallasChip1394Configuration" << std::endl;
    description__cdg << "  name:" << cmnData<std::string >::HumanReadable(this->name);
    description__cdg << "  board_id:" << cmnData<int >::HumanReadable(this->board_id);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDallasChip1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->name)
           && cmnData<int >::ScalarNumberIsFixed(this->board_id)
    ;
}
size_t sawRobotIO1394::osaDallasChip1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->name)
           + cmnData<int >::ScalarNumber(this->board_id)
    ;
}
std::string sawRobotIO1394::osaDallasChip1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->name, index_cdg - baseIndex__cdg, prefix__cdg + "name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->board_id, index_cdg - baseIndex__cdg, prefix__cdg + "board_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDallasChip1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDallasChip1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->board_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDallasChip1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeText(const sawRobotIO1394::osaDallasChip1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDallasChip1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<int >::SerializeText(this->board_id, jsonValue["board_id"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::DeSerializeText(sawRobotIO1394::osaDallasChip1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["name"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->name, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < name");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: name");
    };
    field__cdg = jsonValue["board_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->board_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < board_id");
        }
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: board_id");
    };
}
#endif // CISST_HAS_JSON

/* source line: 494 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaPort1394ConfigurationProxy);

sawRobotIO1394::osaPort1394Configuration::osaPort1394Configuration(void):
    robots(std::vector<osaRobot1394Configuration>())
    , digital_inputs(std::vector<osaDigitalInput1394Configuration>())
    , digital_outputs(std::vector<osaDigitalOutput1394Configuration>())
    , dallas_chips(std::vector<osaDallasChip1394Configuration>())
{}

sawRobotIO1394::osaPort1394Configuration::osaPort1394Configuration(const osaPort1394Configuration & other):
    robots(other.robots)
    , digital_inputs(other.digital_inputs)
    , digital_outputs(other.digital_outputs)
    , dallas_chips(other.dallas_chips)
{}

sawRobotIO1394::osaPort1394Configuration & sawRobotIO1394::osaPort1394Configuration::operator = (const osaPort1394Configuration & other)
{
    robots = other.robots;
    digital_inputs = other.digital_inputs;
    digital_outputs = other.digital_outputs;
    dallas_chips = other.dallas_chips;
    return *this;
}

sawRobotIO1394::osaPort1394Configuration::~osaPort1394Configuration(void){}


void sawRobotIO1394::osaPort1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->robots);
    cmnSerializeRaw(outputStream__cdg, this->digital_inputs);
    cmnSerializeRaw(outputStream__cdg, this->digital_outputs);
    cmnSerializeRaw(outputStream__cdg, this->dallas_chips);
}


void sawRobotIO1394::osaPort1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->robots);
    cmnDeSerializeRaw(inputStream__cdg, this->digital_inputs);
    cmnDeSerializeRaw(inputStream__cdg, this->digital_outputs);
    cmnDeSerializeRaw(inputStream__cdg, this->dallas_chips);
}


void sawRobotIO1394::osaPort1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaPort1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaPort1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaPort1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 498 */
/* source line: 504 */
/* source line: 510 */
/* source line: 516 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPort1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPort1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaPort1394Configuration::Copy(const sawRobotIO1394::osaPort1394Configuration & source__cdg) {
    cmnData<std::vector<osaRobot1394Configuration> >::Copy(this->robots, source__cdg.robots);
    cmnData<std::vector<osaDigitalInput1394Configuration> >::Copy(this->digital_inputs, source__cdg.digital_inputs);
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::Copy(this->digital_outputs, source__cdg.digital_outputs);
    cmnData<std::vector<osaDallasChip1394Configuration> >::Copy(this->dallas_chips, source__cdg.dallas_chips);
}
void sawRobotIO1394::osaPort1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::vector<osaRobot1394Configuration> >::SerializeBinary(this->robots, outputStream__cdg);
    cmnData<std::vector<osaDigitalInput1394Configuration> >::SerializeBinary(this->digital_inputs, outputStream__cdg);
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::SerializeBinary(this->digital_outputs, outputStream__cdg);
    cmnData<std::vector<osaDallasChip1394Configuration> >::SerializeBinary(this->dallas_chips, outputStream__cdg);
}
void sawRobotIO1394::osaPort1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::vector<osaRobot1394Configuration> >::DeSerializeBinary(this->robots, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaDigitalInput1394Configuration> >::DeSerializeBinary(this->digital_inputs, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::DeSerializeBinary(this->digital_outputs, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaDallasChip1394Configuration> >::DeSerializeBinary(this->dallas_chips, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaPort1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaRobot1394Configuration> >::SerializeText(this->robots, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalInput1394Configuration> >::SerializeText(this->digital_inputs, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::SerializeText(this->digital_outputs, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaDallasChip1394Configuration> >::SerializeText(this->dallas_chips, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPort1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaRobot1394Configuration> >::SerializeDescription(this->robots, delimiter__cdg, prefix__cdg + "robots");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaDigitalInput1394Configuration> >::SerializeDescription(this->digital_inputs, delimiter__cdg, prefix__cdg + "digital_inputs");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaDigitalOutput1394Configuration> >::SerializeDescription(this->digital_outputs, delimiter__cdg, prefix__cdg + "digital_outputs");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaDallasChip1394Configuration> >::SerializeDescription(this->dallas_chips, delimiter__cdg, prefix__cdg + "dallas_chips");
    return description__cdg.str();
}
void sawRobotIO1394::osaPort1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaRobot1394Configuration> >::DeSerializeText(this->robots, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalInput1394Configuration> >::DeSerializeText(this->digital_inputs, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::DeSerializeText(this->digital_outputs, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaDallasChip1394Configuration> >::DeSerializeText(this->dallas_chips, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPort1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaPort1394Configuration" << std::endl;
    description__cdg << "  robots:" << cmnData<std::vector<osaRobot1394Configuration> >::HumanReadable(this->robots);
    description__cdg << "  digital_inputs:" << cmnData<std::vector<osaDigitalInput1394Configuration> >::HumanReadable(this->digital_inputs);
    description__cdg << "  digital_outputs:" << cmnData<std::vector<osaDigitalOutput1394Configuration> >::HumanReadable(this->digital_outputs);
    description__cdg << "  dallas_chips:" << cmnData<std::vector<osaDallasChip1394Configuration> >::HumanReadable(this->dallas_chips);
    return description__cdg.str();
}
bool sawRobotIO1394::osaPort1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumberIsFixed(this->robots)
           && cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumberIsFixed(this->digital_inputs)
           && cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumberIsFixed(this->digital_outputs)
           && cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumberIsFixed(this->dallas_chips)
    ;
}
size_t sawRobotIO1394::osaPort1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumber(this->robots)
           + cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumber(this->digital_inputs)
           + cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumber(this->digital_outputs)
           + cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumber(this->dallas_chips)
    ;
}
std::string sawRobotIO1394::osaPort1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumber(this->robots);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaRobot1394Configuration> >::ScalarDescription(this->robots, index_cdg - baseIndex__cdg, prefix__cdg + "robots");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumber(this->digital_inputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarDescription(this->digital_inputs, index_cdg - baseIndex__cdg, prefix__cdg + "digital_inputs");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumber(this->digital_outputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarDescription(this->digital_outputs, index_cdg - baseIndex__cdg, prefix__cdg + "digital_outputs");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumber(this->dallas_chips);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarDescription(this->dallas_chips, index_cdg - baseIndex__cdg, prefix__cdg + "dallas_chips");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaPort1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaPort1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumber(this->robots);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaRobot1394Configuration> >::Scalar(this->robots, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumber(this->digital_inputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalInput1394Configuration> >::Scalar(this->digital_inputs, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumber(this->digital_outputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalOutput1394Configuration> >::Scalar(this->digital_outputs, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumber(this->dallas_chips);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDallasChip1394Configuration> >::Scalar(this->dallas_chips, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaPort1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::SerializeText(const sawRobotIO1394::osaPort1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPort1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::vector<osaRobot1394Configuration> >::SerializeText(this->robots, jsonValue["robots"]);
    cmnDataJSON<std::vector<osaDigitalInput1394Configuration> >::SerializeText(this->digital_inputs, jsonValue["digital_inputs"]);
    cmnDataJSON<std::vector<osaDigitalOutput1394Configuration> >::SerializeText(this->digital_outputs, jsonValue["digital_outputs"]);
    cmnDataJSON<std::vector<osaDallasChip1394Configuration> >::SerializeText(this->dallas_chips, jsonValue["dallas_chips"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::DeSerializeText(sawRobotIO1394::osaPort1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPort1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["robots"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<osaRobot1394Configuration> >::DeSerializeText(this->robots, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < robots");
        }
    };
    field__cdg = jsonValue["digital_inputs"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<osaDigitalInput1394Configuration> >::DeSerializeText(this->digital_inputs, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < digital_inputs");
        }
    };
    field__cdg = jsonValue["digital_outputs"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<osaDigitalOutput1394Configuration> >::DeSerializeText(this->digital_outputs, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < digital_outputs");
        }
    };
    field__cdg = jsonValue["dallas_chips"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<osaDallasChip1394Configuration> >::DeSerializeText(this->dallas_chips, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < dallas_chips");
        }
    };
}
#endif // CISST_HAS_JSON

/* source line: 524 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaActuatorMappingProxy);

sawRobotIO1394::osaActuatorMapping::osaActuatorMapping(void):
    board(nullptr)
    , board_id()
    , axis()
{}

sawRobotIO1394::osaActuatorMapping::osaActuatorMapping(const osaActuatorMapping & other):
    board(other.board)
    , board_id(other.board_id)
    , axis(other.axis)
{}

sawRobotIO1394::osaActuatorMapping & sawRobotIO1394::osaActuatorMapping::operator = (const osaActuatorMapping & other)
{
    board = other.board;
    board_id = other.board_id;
    axis = other.axis;
    return *this;
}

sawRobotIO1394::osaActuatorMapping::~osaActuatorMapping(void){}


void sawRobotIO1394::osaActuatorMapping::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->board_id);
    cmnSerializeRaw(outputStream__cdg, this->axis);
}


void sawRobotIO1394::osaActuatorMapping::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->board_id);
    cmnDeSerializeRaw(inputStream__cdg, this->axis);
}


void sawRobotIO1394::osaActuatorMapping::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaActuatorMapping::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaActuatorMapping >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaActuatorMapping >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 528 */
/* source line: 535 */
/* source line: 540 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuatorMapping & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuatorMapping & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaActuatorMapping::Copy(const sawRobotIO1394::osaActuatorMapping & source__cdg) {
    cmnData<int >::Copy(this->board_id, source__cdg.board_id);
    cmnData<int >::Copy(this->axis, source__cdg.axis);
}
void sawRobotIO1394::osaActuatorMapping::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->board_id, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->axis, outputStream__cdg);
}
void sawRobotIO1394::osaActuatorMapping::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->board_id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->axis, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaActuatorMapping::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->board_id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->axis, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuatorMapping::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->board_id, delimiter__cdg, prefix__cdg + "board_id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->axis, delimiter__cdg, prefix__cdg + "axis");
    return description__cdg.str();
}
void sawRobotIO1394::osaActuatorMapping::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuatorMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->board_id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuatorMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->axis, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuatorMapping::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaActuatorMapping" << std::endl;
    description__cdg << "  board_id:" << cmnData<int >::HumanReadable(this->board_id);
    description__cdg << "  axis:" << cmnData<int >::HumanReadable(this->axis);
    return description__cdg.str();
}
bool sawRobotIO1394::osaActuatorMapping::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->board_id)
           && cmnData<int >::ScalarNumberIsFixed(this->axis)
    ;
}
size_t sawRobotIO1394::osaActuatorMapping::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->board_id)
           + cmnData<int >::ScalarNumber(this->axis)
    ;
}
std::string sawRobotIO1394::osaActuatorMapping::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->board_id, index_cdg - baseIndex__cdg, prefix__cdg + "board_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->axis, index_cdg - baseIndex__cdg, prefix__cdg + "axis");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaActuatorMapping index out of range"));
    return "";
}
double sawRobotIO1394::osaActuatorMapping::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->board_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->axis, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaActuatorMapping index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::SerializeText(const sawRobotIO1394::osaActuatorMapping & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuatorMapping::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->board_id, jsonValue["board_id"]);
    cmnDataJSON<int >::SerializeText(this->axis, jsonValue["axis"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::DeSerializeText(sawRobotIO1394::osaActuatorMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuatorMapping::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["board_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->board_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < board_id");
        }
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: board_id");
    };
    field__cdg = jsonValue["axis"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->axis, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < axis");
        }
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: axis");
    };
}
#endif // CISST_HAS_JSON

/* source line: 547 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaBrakeMappingProxy);

sawRobotIO1394::osaBrakeMapping::osaBrakeMapping(void):
    board(nullptr)
    , board_id()
    , axis()
{}

sawRobotIO1394::osaBrakeMapping::osaBrakeMapping(const osaBrakeMapping & other):
    board(other.board)
    , board_id(other.board_id)
    , axis(other.axis)
{}

sawRobotIO1394::osaBrakeMapping & sawRobotIO1394::osaBrakeMapping::operator = (const osaBrakeMapping & other)
{
    board = other.board;
    board_id = other.board_id;
    axis = other.axis;
    return *this;
}

sawRobotIO1394::osaBrakeMapping::~osaBrakeMapping(void){}


void sawRobotIO1394::osaBrakeMapping::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->board_id);
    cmnSerializeRaw(outputStream__cdg, this->axis);
}


void sawRobotIO1394::osaBrakeMapping::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->board_id);
    cmnDeSerializeRaw(inputStream__cdg, this->axis);
}


void sawRobotIO1394::osaBrakeMapping::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaBrakeMapping::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaBrakeMapping >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaBrakeMapping >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 551 */
/* source line: 558 */
/* source line: 563 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaBrakeMapping & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaBrakeMapping & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaBrakeMapping::Copy(const sawRobotIO1394::osaBrakeMapping & source__cdg) {
    cmnData<int >::Copy(this->board_id, source__cdg.board_id);
    cmnData<int >::Copy(this->axis, source__cdg.axis);
}
void sawRobotIO1394::osaBrakeMapping::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->board_id, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->axis, outputStream__cdg);
}
void sawRobotIO1394::osaBrakeMapping::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->board_id, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->axis, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaBrakeMapping::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->board_id, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->axis, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaBrakeMapping::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->board_id, delimiter__cdg, prefix__cdg + "board_id");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->axis, delimiter__cdg, prefix__cdg + "axis");
    return description__cdg.str();
}
void sawRobotIO1394::osaBrakeMapping::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrakeMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->board_id, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrakeMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->axis, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaBrakeMapping::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaBrakeMapping" << std::endl;
    description__cdg << "  board_id:" << cmnData<int >::HumanReadable(this->board_id);
    description__cdg << "  axis:" << cmnData<int >::HumanReadable(this->axis);
    return description__cdg.str();
}
bool sawRobotIO1394::osaBrakeMapping::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->board_id)
           && cmnData<int >::ScalarNumberIsFixed(this->axis)
    ;
}
size_t sawRobotIO1394::osaBrakeMapping::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->board_id)
           + cmnData<int >::ScalarNumber(this->axis)
    ;
}
std::string sawRobotIO1394::osaBrakeMapping::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->board_id, index_cdg - baseIndex__cdg, prefix__cdg + "board_id");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->axis, index_cdg - baseIndex__cdg, prefix__cdg + "axis");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaBrakeMapping index out of range"));
    return "";
}
double sawRobotIO1394::osaBrakeMapping::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->board_id);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->board_id, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->axis, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaBrakeMapping index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::SerializeText(const sawRobotIO1394::osaBrakeMapping & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaBrakeMapping::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->board_id, jsonValue["board_id"]);
    cmnDataJSON<int >::SerializeText(this->axis, jsonValue["axis"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::DeSerializeText(sawRobotIO1394::osaBrakeMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaBrakeMapping::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["board_id"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->board_id, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < board_id");
        }
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: board_id");
    };
    field__cdg = jsonValue["axis"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<int >::DeSerializeText(this->axis, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < axis");
        }
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: axis");
    };
}
#endif // CISST_HAS_JSON

