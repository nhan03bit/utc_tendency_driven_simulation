// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/base_frame.cdg

#include <sawIntuitiveResearchKit/base_frame.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 15 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_base_frameProxy);

dvrk::base_frame::base_frame(void):
    reference_frame("")
    , transform(vctFrm4x4::Identity())
    , component("")
    , interface("")
{}

dvrk::base_frame::base_frame(const base_frame & other):
    reference_frame(other.reference_frame)
    , transform(other.transform)
    , component(other.component)
    , interface(other.interface)
{}

dvrk::base_frame & dvrk::base_frame::operator = (const base_frame & other)
{
    reference_frame = other.reference_frame;
    transform = other.transform;
    component = other.component;
    interface = other.interface;
    return *this;
}

dvrk::base_frame::~base_frame(void){}


void dvrk::base_frame::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->reference_frame);
    cmnSerializeRaw(outputStream__cdg, this->transform);
    cmnSerializeRaw(outputStream__cdg, this->component);
    cmnSerializeRaw(outputStream__cdg, this->interface);
}


void dvrk::base_frame::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->reference_frame);
    cmnDeSerializeRaw(inputStream__cdg, this->transform);
    cmnDeSerializeRaw(inputStream__cdg, this->component);
    cmnDeSerializeRaw(inputStream__cdg, this->interface);
}


void dvrk::base_frame::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::base_frame::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::base_frame >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::base_frame >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 21 */
/* source line: 28 */
/* source line: 37 */
/* source line: 44 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::base_frame & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::base_frame & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::base_frame::Copy(const dvrk::base_frame & source__cdg) {
    cmnData<std::string >::Copy(this->reference_frame, source__cdg.reference_frame);
    cmnData<vctFrm4x4 >::Copy(this->transform, source__cdg.transform);
    cmnData<std::string >::Copy(this->component, source__cdg.component);
    cmnData<std::string >::Copy(this->interface, source__cdg.interface);
}
void dvrk::base_frame::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->reference_frame, outputStream__cdg);
    cmnData<vctFrm4x4 >::SerializeBinary(this->transform, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->component, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->interface, outputStream__cdg);
}
void dvrk::base_frame::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->reference_frame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm4x4 >::DeSerializeBinary(this->transform, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->component, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->interface, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::base_frame::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->reference_frame, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctFrm4x4 >::SerializeText(this->transform, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->component, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->interface, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::base_frame::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->reference_frame, delimiter__cdg, prefix__cdg + "reference_frame");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctFrm4x4 >::SerializeDescription(this->transform, delimiter__cdg, prefix__cdg + "transform");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->component, delimiter__cdg, prefix__cdg + "component");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->interface, delimiter__cdg, prefix__cdg + "interface");
    return description__cdg.str();
}
void dvrk::base_frame::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::base_frame");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->reference_frame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::base_frame");
    }
    someData__cdg = true;
    cmnData<vctFrm4x4 >::DeSerializeText(this->transform, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::base_frame");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->component, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::base_frame");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->interface, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::base_frame::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::base_frame" << std::endl;
    description__cdg << "  reference_frame:" << cmnData<std::string >::HumanReadable(this->reference_frame);
    description__cdg << "  transform:" << cmnData<vctFrm4x4 >::HumanReadable(this->transform);
    description__cdg << "  component:" << cmnData<std::string >::HumanReadable(this->component);
    description__cdg << "  interface:" << cmnData<std::string >::HumanReadable(this->interface);
    return description__cdg.str();
}
bool dvrk::base_frame::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->reference_frame)
           && cmnData<vctFrm4x4 >::ScalarNumberIsFixed(this->transform)
           && cmnData<std::string >::ScalarNumberIsFixed(this->component)
           && cmnData<std::string >::ScalarNumberIsFixed(this->interface)
    ;
}
size_t dvrk::base_frame::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->reference_frame)
           + cmnData<vctFrm4x4 >::ScalarNumber(this->transform)
           + cmnData<std::string >::ScalarNumber(this->component)
           + cmnData<std::string >::ScalarNumber(this->interface)
    ;
}
std::string dvrk::base_frame::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->reference_frame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->reference_frame, index_cdg - baseIndex__cdg, prefix__cdg + "reference_frame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm4x4 >::ScalarNumber(this->transform);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm4x4 >::ScalarDescription(this->transform, index_cdg - baseIndex__cdg, prefix__cdg + "transform");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->component);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->component, index_cdg - baseIndex__cdg, prefix__cdg + "component");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->interface);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->interface, index_cdg - baseIndex__cdg, prefix__cdg + "interface");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::base_frame index out of range"));
    return "";
}
double dvrk::base_frame::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->reference_frame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->reference_frame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm4x4 >::ScalarNumber(this->transform);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm4x4 >::Scalar(this->transform, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->component);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->component, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->interface);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->interface, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::base_frame index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::base_frame >::SerializeText(const dvrk::base_frame & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::base_frame::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->reference_frame, jsonValue["reference_frame"]);
    cmnDataJSON<vctFrm4x4 >::SerializeText(this->transform, jsonValue["transform"]);
    cmnDataJSON<std::string >::SerializeText(this->component, jsonValue["component"]);
    cmnDataJSON<std::string >::SerializeText(this->interface, jsonValue["interface"]);
}
template<>
void cmnDataJSON<dvrk::base_frame >::DeSerializeText(dvrk::base_frame & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::base_frame::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["reference_frame"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->reference_frame, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < reference_frame");
        }
    };
    field__cdg = jsonValue["transform"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vctFrm4x4 >::DeSerializeText(this->transform, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < transform");
        }
    };
    field__cdg = jsonValue["component"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->component, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < component");
        }
    };
    field__cdg = jsonValue["interface"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->interface, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < interface");
        }
    };
}
#endif // CISST_HAS_JSON

