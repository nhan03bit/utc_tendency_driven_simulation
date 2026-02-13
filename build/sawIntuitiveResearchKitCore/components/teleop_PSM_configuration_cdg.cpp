// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/teleop_PSM_configuration.cdg

#include <sawIntuitiveResearchKit/teleop_PSM_configuration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 10 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_teleop_PSM_configuration_gripper_scalingProxy);

dvrk::teleop_PSM_configuration_gripper_scaling::teleop_PSM_configuration_gripper_scaling(void):
    zero(mtsIntuitiveResearchKit::TeleOperationPSM::GripperZero)
    , max(mtsIntuitiveResearchKit::TeleOperationPSM::GripperMax)
{}

dvrk::teleop_PSM_configuration_gripper_scaling::teleop_PSM_configuration_gripper_scaling(const teleop_PSM_configuration_gripper_scaling & other):
    zero(other.zero)
    , max(other.max)
{}

dvrk::teleop_PSM_configuration_gripper_scaling & dvrk::teleop_PSM_configuration_gripper_scaling::operator = (const teleop_PSM_configuration_gripper_scaling & other)
{
    zero = other.zero;
    max = other.max;
    return *this;
}

dvrk::teleop_PSM_configuration_gripper_scaling::~teleop_PSM_configuration_gripper_scaling(void){}


void dvrk::teleop_PSM_configuration_gripper_scaling::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->zero);
    cmnSerializeRaw(outputStream__cdg, this->max);
}


void dvrk::teleop_PSM_configuration_gripper_scaling::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->zero);
    cmnDeSerializeRaw(inputStream__cdg, this->max);
}


void dvrk::teleop_PSM_configuration_gripper_scaling::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::teleop_PSM_configuration_gripper_scaling::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::teleop_PSM_configuration_gripper_scaling >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::teleop_PSM_configuration_gripper_scaling >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 15 */
/* source line: 22 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::teleop_PSM_configuration_gripper_scaling & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::teleop_PSM_configuration_gripper_scaling & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::teleop_PSM_configuration_gripper_scaling::Copy(const dvrk::teleop_PSM_configuration_gripper_scaling & source__cdg) {
    cmnData<double >::Copy(this->zero, source__cdg.zero);
    cmnData<double >::Copy(this->max, source__cdg.max);
}
void dvrk::teleop_PSM_configuration_gripper_scaling::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<double >::SerializeBinary(this->zero, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->max, outputStream__cdg);
}
void dvrk::teleop_PSM_configuration_gripper_scaling::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<double >::DeSerializeBinary(this->zero, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->max, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::teleop_PSM_configuration_gripper_scaling::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->zero, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->max, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::teleop_PSM_configuration_gripper_scaling::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->zero, delimiter__cdg, prefix__cdg + "zero");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->max, delimiter__cdg, prefix__cdg + "max");
    return description__cdg.str();
}
void dvrk::teleop_PSM_configuration_gripper_scaling::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration_gripper_scaling");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->zero, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration_gripper_scaling");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->max, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::teleop_PSM_configuration_gripper_scaling::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::teleop_PSM_configuration_gripper_scaling" << std::endl;
    description__cdg << "  zero:" << cmnData<double >::HumanReadable(this->zero);
    description__cdg << "  max:" << cmnData<double >::HumanReadable(this->max);
    return description__cdg.str();
}
bool dvrk::teleop_PSM_configuration_gripper_scaling::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<double >::ScalarNumberIsFixed(this->zero)
           && cmnData<double >::ScalarNumberIsFixed(this->max)
    ;
}
size_t dvrk::teleop_PSM_configuration_gripper_scaling::ScalarNumber(void) const {
    return 0
           + cmnData<double >::ScalarNumber(this->zero)
           + cmnData<double >::ScalarNumber(this->max)
    ;
}
std::string dvrk::teleop_PSM_configuration_gripper_scaling::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->zero);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->zero, index_cdg - baseIndex__cdg, prefix__cdg + "zero");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->max);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->max, index_cdg - baseIndex__cdg, prefix__cdg + "max");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::teleop_PSM_configuration_gripper_scaling index out of range"));
    return "";
}
double dvrk::teleop_PSM_configuration_gripper_scaling::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->zero);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->zero, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->max);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->max, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::teleop_PSM_configuration_gripper_scaling index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::teleop_PSM_configuration_gripper_scaling >::SerializeText(const dvrk::teleop_PSM_configuration_gripper_scaling & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::teleop_PSM_configuration_gripper_scaling::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<double >::SerializeText(this->zero, jsonValue["zero"]);
    cmnDataJSON<double >::SerializeText(this->max, jsonValue["max"]);
}
template<>
void cmnDataJSON<dvrk::teleop_PSM_configuration_gripper_scaling >::DeSerializeText(dvrk::teleop_PSM_configuration_gripper_scaling & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::teleop_PSM_configuration_gripper_scaling::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["zero"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->zero, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < zero");
        }
    };
    field__cdg = jsonValue["max"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->max, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < max");
        }
    };
}
#endif // CISST_HAS_JSON

/* source line: 31 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_teleop_PSM_configurationProxy);

dvrk::teleop_PSM_configuration::teleop_PSM_configuration(void):
    align_MTM(true)
    , rotation_locked(false)
    , translation_locked(false)
    , start_orientation_tolerance(mtsIntuitiveResearchKit::TeleOperationPSM::StartOrientationTolerance)
    , orientation_tolerance_after_clutch(mtsIntuitiveResearchKit::TeleOperationPSM::OrientationToleranceAfterClutch)
    , start_gripper_threshold(mtsIntuitiveResearchKit::TeleOperationPSM::StartGripperThreshold)
    , start_roll_threshold(mtsIntuitiveResearchKit::TeleOperationPSM::StartRollThreshold)
    , ignore_jaw(false)
    , scale(mtsIntuitiveResearchKit::TeleOperationPSM::Scale)
    , jaw_rate(mtsIntuitiveResearchKit::TeleOperationPSM::JawRate)
    , jaw_rate_after_clutch(mtsIntuitiveResearchKit::TeleOperationPSM::JawRateAfterClutch)
    , use_MTM_linear_velocity(true)
    , use_MTM_angular_velocity(false)
    , MTM_is_haptic(true)
    , gripper_scaling(teleop_PSM_configuration_gripper_scaling())
{}

dvrk::teleop_PSM_configuration::teleop_PSM_configuration(const teleop_PSM_configuration & other):
    align_MTM(other.align_MTM)
    , rotation_locked(other.rotation_locked)
    , translation_locked(other.translation_locked)
    , start_orientation_tolerance(other.start_orientation_tolerance)
    , orientation_tolerance_after_clutch(other.orientation_tolerance_after_clutch)
    , start_gripper_threshold(other.start_gripper_threshold)
    , start_roll_threshold(other.start_roll_threshold)
    , ignore_jaw(other.ignore_jaw)
    , scale(other.scale)
    , jaw_rate(other.jaw_rate)
    , jaw_rate_after_clutch(other.jaw_rate_after_clutch)
    , use_MTM_linear_velocity(other.use_MTM_linear_velocity)
    , use_MTM_angular_velocity(other.use_MTM_angular_velocity)
    , MTM_is_haptic(other.MTM_is_haptic)
    , gripper_scaling(other.gripper_scaling)
{}

dvrk::teleop_PSM_configuration & dvrk::teleop_PSM_configuration::operator = (const teleop_PSM_configuration & other)
{
    align_MTM = other.align_MTM;
    rotation_locked = other.rotation_locked;
    translation_locked = other.translation_locked;
    start_orientation_tolerance = other.start_orientation_tolerance;
    orientation_tolerance_after_clutch = other.orientation_tolerance_after_clutch;
    start_gripper_threshold = other.start_gripper_threshold;
    start_roll_threshold = other.start_roll_threshold;
    ignore_jaw = other.ignore_jaw;
    scale = other.scale;
    jaw_rate = other.jaw_rate;
    jaw_rate_after_clutch = other.jaw_rate_after_clutch;
    use_MTM_linear_velocity = other.use_MTM_linear_velocity;
    use_MTM_angular_velocity = other.use_MTM_angular_velocity;
    MTM_is_haptic = other.MTM_is_haptic;
    gripper_scaling = other.gripper_scaling;
    return *this;
}

dvrk::teleop_PSM_configuration::~teleop_PSM_configuration(void){}


void dvrk::teleop_PSM_configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->align_MTM);
    cmnSerializeRaw(outputStream__cdg, this->rotation_locked);
    cmnSerializeRaw(outputStream__cdg, this->translation_locked);
    cmnSerializeRaw(outputStream__cdg, this->start_orientation_tolerance);
    cmnSerializeRaw(outputStream__cdg, this->orientation_tolerance_after_clutch);
    cmnSerializeRaw(outputStream__cdg, this->start_gripper_threshold);
    cmnSerializeRaw(outputStream__cdg, this->start_roll_threshold);
    cmnSerializeRaw(outputStream__cdg, this->ignore_jaw);
    cmnSerializeRaw(outputStream__cdg, this->scale);
    cmnSerializeRaw(outputStream__cdg, this->jaw_rate);
    cmnSerializeRaw(outputStream__cdg, this->jaw_rate_after_clutch);
    cmnSerializeRaw(outputStream__cdg, this->use_MTM_linear_velocity);
    cmnSerializeRaw(outputStream__cdg, this->use_MTM_angular_velocity);
    cmnSerializeRaw(outputStream__cdg, this->MTM_is_haptic);
    cmnSerializeRaw(outputStream__cdg, this->gripper_scaling);
}


void dvrk::teleop_PSM_configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->align_MTM);
    cmnDeSerializeRaw(inputStream__cdg, this->rotation_locked);
    cmnDeSerializeRaw(inputStream__cdg, this->translation_locked);
    cmnDeSerializeRaw(inputStream__cdg, this->start_orientation_tolerance);
    cmnDeSerializeRaw(inputStream__cdg, this->orientation_tolerance_after_clutch);
    cmnDeSerializeRaw(inputStream__cdg, this->start_gripper_threshold);
    cmnDeSerializeRaw(inputStream__cdg, this->start_roll_threshold);
    cmnDeSerializeRaw(inputStream__cdg, this->ignore_jaw);
    cmnDeSerializeRaw(inputStream__cdg, this->scale);
    cmnDeSerializeRaw(inputStream__cdg, this->jaw_rate);
    cmnDeSerializeRaw(inputStream__cdg, this->jaw_rate_after_clutch);
    cmnDeSerializeRaw(inputStream__cdg, this->use_MTM_linear_velocity);
    cmnDeSerializeRaw(inputStream__cdg, this->use_MTM_angular_velocity);
    cmnDeSerializeRaw(inputStream__cdg, this->MTM_is_haptic);
    cmnDeSerializeRaw(inputStream__cdg, this->gripper_scaling);
}


void dvrk::teleop_PSM_configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::teleop_PSM_configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::teleop_PSM_configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::teleop_PSM_configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 36 */
/* source line: 43 */
/* source line: 50 */
/* source line: 57 */
/* source line: 64 */
/* source line: 71 */
/* source line: 78 */
/* source line: 85 */
/* source line: 92 */
/* source line: 99 */
/* source line: 106 */
/* source line: 113 */
/* source line: 120 */
/* source line: 127 */
/* source line: 134 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::teleop_PSM_configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::teleop_PSM_configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::teleop_PSM_configuration::Copy(const dvrk::teleop_PSM_configuration & source__cdg) {
    cmnData<bool >::Copy(this->align_MTM, source__cdg.align_MTM);
    cmnData<bool >::Copy(this->rotation_locked, source__cdg.rotation_locked);
    cmnData<bool >::Copy(this->translation_locked, source__cdg.translation_locked);
    cmnData<double >::Copy(this->start_orientation_tolerance, source__cdg.start_orientation_tolerance);
    cmnData<double >::Copy(this->orientation_tolerance_after_clutch, source__cdg.orientation_tolerance_after_clutch);
    cmnData<double >::Copy(this->start_gripper_threshold, source__cdg.start_gripper_threshold);
    cmnData<double >::Copy(this->start_roll_threshold, source__cdg.start_roll_threshold);
    cmnData<bool >::Copy(this->ignore_jaw, source__cdg.ignore_jaw);
    cmnData<double >::Copy(this->scale, source__cdg.scale);
    cmnData<double >::Copy(this->jaw_rate, source__cdg.jaw_rate);
    cmnData<double >::Copy(this->jaw_rate_after_clutch, source__cdg.jaw_rate_after_clutch);
    cmnData<bool >::Copy(this->use_MTM_linear_velocity, source__cdg.use_MTM_linear_velocity);
    cmnData<bool >::Copy(this->use_MTM_angular_velocity, source__cdg.use_MTM_angular_velocity);
    cmnData<bool >::Copy(this->MTM_is_haptic, source__cdg.MTM_is_haptic);
    cmnData<teleop_PSM_configuration_gripper_scaling >::Copy(this->gripper_scaling, source__cdg.gripper_scaling);
}
void dvrk::teleop_PSM_configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<bool >::SerializeBinary(this->align_MTM, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->rotation_locked, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->translation_locked, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->start_orientation_tolerance, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->orientation_tolerance_after_clutch, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->start_gripper_threshold, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->start_roll_threshold, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->ignore_jaw, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->scale, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->jaw_rate, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->jaw_rate_after_clutch, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->use_MTM_linear_velocity, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->use_MTM_angular_velocity, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->MTM_is_haptic, outputStream__cdg);
    cmnData<teleop_PSM_configuration_gripper_scaling >::SerializeBinary(this->gripper_scaling, outputStream__cdg);
}
void dvrk::teleop_PSM_configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<bool >::DeSerializeBinary(this->align_MTM, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->rotation_locked, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->translation_locked, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->start_orientation_tolerance, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->orientation_tolerance_after_clutch, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->start_gripper_threshold, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->start_roll_threshold, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->ignore_jaw, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->scale, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->jaw_rate, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->jaw_rate_after_clutch, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->use_MTM_linear_velocity, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->use_MTM_angular_velocity, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->MTM_is_haptic, inputStream__cdg, localFormat, remoteFormat);
    cmnData<teleop_PSM_configuration_gripper_scaling >::DeSerializeBinary(this->gripper_scaling, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::teleop_PSM_configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->align_MTM, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->rotation_locked, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->translation_locked, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->start_orientation_tolerance, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->orientation_tolerance_after_clutch, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->start_gripper_threshold, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->start_roll_threshold, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->ignore_jaw, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->scale, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->jaw_rate, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->jaw_rate_after_clutch, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->use_MTM_linear_velocity, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->use_MTM_angular_velocity, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->MTM_is_haptic, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<teleop_PSM_configuration_gripper_scaling >::SerializeText(this->gripper_scaling, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::teleop_PSM_configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->align_MTM, delimiter__cdg, prefix__cdg + "align_MTM");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->rotation_locked, delimiter__cdg, prefix__cdg + "rotation_locked");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->translation_locked, delimiter__cdg, prefix__cdg + "translation_locked");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->start_orientation_tolerance, delimiter__cdg, prefix__cdg + "start_orientation_tolerance");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->orientation_tolerance_after_clutch, delimiter__cdg, prefix__cdg + "orientation_tolerance_after_clutch");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->start_gripper_threshold, delimiter__cdg, prefix__cdg + "start_gripper_threshold");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->start_roll_threshold, delimiter__cdg, prefix__cdg + "start_roll_threshold");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->ignore_jaw, delimiter__cdg, prefix__cdg + "ignore_jaw");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->scale, delimiter__cdg, prefix__cdg + "scale");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->jaw_rate, delimiter__cdg, prefix__cdg + "jaw_rate");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->jaw_rate_after_clutch, delimiter__cdg, prefix__cdg + "jaw_rate_after_clutch");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->use_MTM_linear_velocity, delimiter__cdg, prefix__cdg + "use_MTM_linear_velocity");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->use_MTM_angular_velocity, delimiter__cdg, prefix__cdg + "use_MTM_angular_velocity");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->MTM_is_haptic, delimiter__cdg, prefix__cdg + "MTM_is_haptic");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<teleop_PSM_configuration_gripper_scaling >::SerializeDescription(this->gripper_scaling, delimiter__cdg, prefix__cdg + "gripper_scaling");
    return description__cdg.str();
}
void dvrk::teleop_PSM_configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->align_MTM, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->rotation_locked, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->translation_locked, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->start_orientation_tolerance, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->orientation_tolerance_after_clutch, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->start_gripper_threshold, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->start_roll_threshold, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->ignore_jaw, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->scale, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->jaw_rate, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->jaw_rate_after_clutch, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->use_MTM_linear_velocity, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->use_MTM_angular_velocity, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->MTM_is_haptic, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_configuration");
    }
    someData__cdg = true;
    cmnData<teleop_PSM_configuration_gripper_scaling >::DeSerializeText(this->gripper_scaling, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::teleop_PSM_configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::teleop_PSM_configuration" << std::endl;
    description__cdg << "  align_MTM:" << cmnData<bool >::HumanReadable(this->align_MTM);
    description__cdg << "  rotation_locked:" << cmnData<bool >::HumanReadable(this->rotation_locked);
    description__cdg << "  translation_locked:" << cmnData<bool >::HumanReadable(this->translation_locked);
    description__cdg << "  start_orientation_tolerance:" << cmnData<double >::HumanReadable(this->start_orientation_tolerance);
    description__cdg << "  orientation_tolerance_after_clutch:" << cmnData<double >::HumanReadable(this->orientation_tolerance_after_clutch);
    description__cdg << "  start_gripper_threshold:" << cmnData<double >::HumanReadable(this->start_gripper_threshold);
    description__cdg << "  start_roll_threshold:" << cmnData<double >::HumanReadable(this->start_roll_threshold);
    description__cdg << "  ignore_jaw:" << cmnData<bool >::HumanReadable(this->ignore_jaw);
    description__cdg << "  scale:" << cmnData<double >::HumanReadable(this->scale);
    description__cdg << "  jaw_rate:" << cmnData<double >::HumanReadable(this->jaw_rate);
    description__cdg << "  jaw_rate_after_clutch:" << cmnData<double >::HumanReadable(this->jaw_rate_after_clutch);
    description__cdg << "  use_MTM_linear_velocity:" << cmnData<bool >::HumanReadable(this->use_MTM_linear_velocity);
    description__cdg << "  use_MTM_angular_velocity:" << cmnData<bool >::HumanReadable(this->use_MTM_angular_velocity);
    description__cdg << "  MTM_is_haptic:" << cmnData<bool >::HumanReadable(this->MTM_is_haptic);
    description__cdg << "  gripper_scaling:" << cmnData<teleop_PSM_configuration_gripper_scaling >::HumanReadable(this->gripper_scaling);
    return description__cdg.str();
}
bool dvrk::teleop_PSM_configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<bool >::ScalarNumberIsFixed(this->align_MTM)
           && cmnData<bool >::ScalarNumberIsFixed(this->rotation_locked)
           && cmnData<bool >::ScalarNumberIsFixed(this->translation_locked)
           && cmnData<double >::ScalarNumberIsFixed(this->start_orientation_tolerance)
           && cmnData<double >::ScalarNumberIsFixed(this->orientation_tolerance_after_clutch)
           && cmnData<double >::ScalarNumberIsFixed(this->start_gripper_threshold)
           && cmnData<double >::ScalarNumberIsFixed(this->start_roll_threshold)
           && cmnData<bool >::ScalarNumberIsFixed(this->ignore_jaw)
           && cmnData<double >::ScalarNumberIsFixed(this->scale)
           && cmnData<double >::ScalarNumberIsFixed(this->jaw_rate)
           && cmnData<double >::ScalarNumberIsFixed(this->jaw_rate_after_clutch)
           && cmnData<bool >::ScalarNumberIsFixed(this->use_MTM_linear_velocity)
           && cmnData<bool >::ScalarNumberIsFixed(this->use_MTM_angular_velocity)
           && cmnData<bool >::ScalarNumberIsFixed(this->MTM_is_haptic)
           && cmnData<teleop_PSM_configuration_gripper_scaling >::ScalarNumberIsFixed(this->gripper_scaling)
    ;
}
size_t dvrk::teleop_PSM_configuration::ScalarNumber(void) const {
    return 0
           + cmnData<bool >::ScalarNumber(this->align_MTM)
           + cmnData<bool >::ScalarNumber(this->rotation_locked)
           + cmnData<bool >::ScalarNumber(this->translation_locked)
           + cmnData<double >::ScalarNumber(this->start_orientation_tolerance)
           + cmnData<double >::ScalarNumber(this->orientation_tolerance_after_clutch)
           + cmnData<double >::ScalarNumber(this->start_gripper_threshold)
           + cmnData<double >::ScalarNumber(this->start_roll_threshold)
           + cmnData<bool >::ScalarNumber(this->ignore_jaw)
           + cmnData<double >::ScalarNumber(this->scale)
           + cmnData<double >::ScalarNumber(this->jaw_rate)
           + cmnData<double >::ScalarNumber(this->jaw_rate_after_clutch)
           + cmnData<bool >::ScalarNumber(this->use_MTM_linear_velocity)
           + cmnData<bool >::ScalarNumber(this->use_MTM_angular_velocity)
           + cmnData<bool >::ScalarNumber(this->MTM_is_haptic)
           + cmnData<teleop_PSM_configuration_gripper_scaling >::ScalarNumber(this->gripper_scaling)
    ;
}
std::string dvrk::teleop_PSM_configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->align_MTM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->align_MTM, index_cdg - baseIndex__cdg, prefix__cdg + "align_MTM");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->rotation_locked);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->rotation_locked, index_cdg - baseIndex__cdg, prefix__cdg + "rotation_locked");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->translation_locked);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->translation_locked, index_cdg - baseIndex__cdg, prefix__cdg + "translation_locked");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->start_orientation_tolerance);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->start_orientation_tolerance, index_cdg - baseIndex__cdg, prefix__cdg + "start_orientation_tolerance");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->orientation_tolerance_after_clutch);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->orientation_tolerance_after_clutch, index_cdg - baseIndex__cdg, prefix__cdg + "orientation_tolerance_after_clutch");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->start_gripper_threshold);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->start_gripper_threshold, index_cdg - baseIndex__cdg, prefix__cdg + "start_gripper_threshold");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->start_roll_threshold);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->start_roll_threshold, index_cdg - baseIndex__cdg, prefix__cdg + "start_roll_threshold");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->ignore_jaw);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->ignore_jaw, index_cdg - baseIndex__cdg, prefix__cdg + "ignore_jaw");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->scale);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->scale, index_cdg - baseIndex__cdg, prefix__cdg + "scale");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->jaw_rate);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->jaw_rate, index_cdg - baseIndex__cdg, prefix__cdg + "jaw_rate");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->jaw_rate_after_clutch);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->jaw_rate_after_clutch, index_cdg - baseIndex__cdg, prefix__cdg + "jaw_rate_after_clutch");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->use_MTM_linear_velocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->use_MTM_linear_velocity, index_cdg - baseIndex__cdg, prefix__cdg + "use_MTM_linear_velocity");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->use_MTM_angular_velocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->use_MTM_angular_velocity, index_cdg - baseIndex__cdg, prefix__cdg + "use_MTM_angular_velocity");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->MTM_is_haptic);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->MTM_is_haptic, index_cdg - baseIndex__cdg, prefix__cdg + "MTM_is_haptic");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<teleop_PSM_configuration_gripper_scaling >::ScalarNumber(this->gripper_scaling);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<teleop_PSM_configuration_gripper_scaling >::ScalarDescription(this->gripper_scaling, index_cdg - baseIndex__cdg, prefix__cdg + "gripper_scaling");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::teleop_PSM_configuration index out of range"));
    return "";
}
double dvrk::teleop_PSM_configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->align_MTM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->align_MTM, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->rotation_locked);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->rotation_locked, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->translation_locked);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->translation_locked, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->start_orientation_tolerance);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->start_orientation_tolerance, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->orientation_tolerance_after_clutch);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->orientation_tolerance_after_clutch, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->start_gripper_threshold);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->start_gripper_threshold, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->start_roll_threshold);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->start_roll_threshold, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->ignore_jaw);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->ignore_jaw, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->scale);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->scale, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->jaw_rate);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->jaw_rate, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->jaw_rate_after_clutch);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->jaw_rate_after_clutch, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->use_MTM_linear_velocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->use_MTM_linear_velocity, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->use_MTM_angular_velocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->use_MTM_angular_velocity, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->MTM_is_haptic);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->MTM_is_haptic, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<teleop_PSM_configuration_gripper_scaling >::ScalarNumber(this->gripper_scaling);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<teleop_PSM_configuration_gripper_scaling >::Scalar(this->gripper_scaling, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::teleop_PSM_configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::teleop_PSM_configuration >::SerializeText(const dvrk::teleop_PSM_configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::teleop_PSM_configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<bool >::SerializeText(this->align_MTM, jsonValue["align_MTM"]);
    cmnDataJSON<bool >::SerializeText(this->rotation_locked, jsonValue["rotation_locked"]);
    cmnDataJSON<bool >::SerializeText(this->translation_locked, jsonValue["translation_locked"]);
    cmnDataJSON<double >::SerializeText(this->start_orientation_tolerance, jsonValue["start_orientation_tolerance"]);
    cmnDataJSON<double >::SerializeText(this->orientation_tolerance_after_clutch, jsonValue["orientation_tolerance_after_clutch"]);
    cmnDataJSON<double >::SerializeText(this->start_gripper_threshold, jsonValue["start_gripper_threshold"]);
    cmnDataJSON<double >::SerializeText(this->start_roll_threshold, jsonValue["start_roll_threshold"]);
    cmnDataJSON<bool >::SerializeText(this->ignore_jaw, jsonValue["ignore_jaw"]);
    cmnDataJSON<double >::SerializeText(this->scale, jsonValue["scale"]);
    cmnDataJSON<double >::SerializeText(this->jaw_rate, jsonValue["jaw_rate"]);
    cmnDataJSON<double >::SerializeText(this->jaw_rate_after_clutch, jsonValue["jaw_rate_after_clutch"]);
    cmnDataJSON<bool >::SerializeText(this->use_MTM_linear_velocity, jsonValue["use_MTM_linear_velocity"]);
    cmnDataJSON<bool >::SerializeText(this->use_MTM_angular_velocity, jsonValue["use_MTM_angular_velocity"]);
    cmnDataJSON<bool >::SerializeText(this->MTM_is_haptic, jsonValue["MTM_is_haptic"]);
    cmnDataJSON<teleop_PSM_configuration_gripper_scaling >::SerializeText(this->gripper_scaling, jsonValue["gripper_scaling"]);
}
template<>
void cmnDataJSON<dvrk::teleop_PSM_configuration >::DeSerializeText(dvrk::teleop_PSM_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::teleop_PSM_configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["align_MTM"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->align_MTM, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < align_MTM");
        }
    };
    field__cdg = jsonValue["rotation_locked"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->rotation_locked, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < rotation_locked");
        }
    };
    field__cdg = jsonValue["translation_locked"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->translation_locked, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < translation_locked");
        }
    };
    field__cdg = jsonValue["start_orientation_tolerance"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->start_orientation_tolerance, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < start_orientation_tolerance");
        }
    };
    field__cdg = jsonValue["orientation_tolerance_after_clutch"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->orientation_tolerance_after_clutch, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < orientation_tolerance_after_clutch");
        }
    };
    field__cdg = jsonValue["start_gripper_threshold"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->start_gripper_threshold, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < start_gripper_threshold");
        }
    };
    field__cdg = jsonValue["start_roll_threshold"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->start_roll_threshold, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < start_roll_threshold");
        }
    };
    field__cdg = jsonValue["ignore_jaw"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->ignore_jaw, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < ignore_jaw");
        }
    };
    field__cdg = jsonValue["scale"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->scale, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < scale");
        }
    };
    field__cdg = jsonValue["jaw_rate"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->jaw_rate, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < jaw_rate");
        }
    };
    field__cdg = jsonValue["jaw_rate_after_clutch"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->jaw_rate_after_clutch, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < jaw_rate_after_clutch");
        }
    };
    field__cdg = jsonValue["use_MTM_linear_velocity"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->use_MTM_linear_velocity, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < use_MTM_linear_velocity");
        }
    };
    field__cdg = jsonValue["use_MTM_angular_velocity"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->use_MTM_angular_velocity, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < use_MTM_angular_velocity");
        }
    };
    field__cdg = jsonValue["MTM_is_haptic"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->MTM_is_haptic, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < MTM_is_haptic");
        }
    };
    field__cdg = jsonValue["gripper_scaling"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<teleop_PSM_configuration_gripper_scaling >::DeSerializeText(this->gripper_scaling, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < gripper_scaling");
        }
    };
}
#endif // CISST_HAS_JSON

