// MESSAGE TRAJ_SEG PACKING

#define MAVLINK_MSG_ID_TRAJ_SEG 151

typedef struct __mavlink_traj_seg_t
{
 float Tdel; ///< The length of time segment is valid.
 float xCoefs[10]; ///< Coefficients for x-polynomial.
 float yCoefs[10]; ///< Coefficients for y-polynomial.
 float zCoefs[10]; ///< Coefficients for z-polynomial.
 float yawCoefs[10]; ///< Coefficients for yaw-polynomial.
 uint8_t nSeg; ///< Total number of segments in trajectory.
 uint8_t curSeg; ///< Current segment in trajectory.
} mavlink_traj_seg_t;

#define MAVLINK_MSG_ID_TRAJ_SEG_LEN 166
#define MAVLINK_MSG_ID_151_LEN 166

#define MAVLINK_MSG_ID_TRAJ_SEG_CRC 66
#define MAVLINK_MSG_ID_151_CRC 66

#define MAVLINK_MSG_TRAJ_SEG_FIELD_XCOEFS_LEN 10
#define MAVLINK_MSG_TRAJ_SEG_FIELD_YCOEFS_LEN 10
#define MAVLINK_MSG_TRAJ_SEG_FIELD_ZCOEFS_LEN 10
#define MAVLINK_MSG_TRAJ_SEG_FIELD_YAWCOEFS_LEN 10

#define MAVLINK_MESSAGE_INFO_TRAJ_SEG { \
	"TRAJ_SEG", \
	7, \
	{  { "Tdel", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_traj_seg_t, Tdel) }, \
         { "xCoefs", NULL, MAVLINK_TYPE_FLOAT, 10, 4, offsetof(mavlink_traj_seg_t, xCoefs) }, \
         { "yCoefs", NULL, MAVLINK_TYPE_FLOAT, 10, 44, offsetof(mavlink_traj_seg_t, yCoefs) }, \
         { "zCoefs", NULL, MAVLINK_TYPE_FLOAT, 10, 84, offsetof(mavlink_traj_seg_t, zCoefs) }, \
         { "yawCoefs", NULL, MAVLINK_TYPE_FLOAT, 10, 124, offsetof(mavlink_traj_seg_t, yawCoefs) }, \
         { "nSeg", NULL, MAVLINK_TYPE_UINT8_T, 0, 164, offsetof(mavlink_traj_seg_t, nSeg) }, \
         { "curSeg", NULL, MAVLINK_TYPE_UINT8_T, 0, 165, offsetof(mavlink_traj_seg_t, curSeg) }, \
         } \
}


/**
 * @brief Pack a traj_seg message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param nSeg Total number of segments in trajectory.
 * @param curSeg Current segment in trajectory.
 * @param Tdel The length of time segment is valid.
 * @param xCoefs Coefficients for x-polynomial.
 * @param yCoefs Coefficients for y-polynomial.
 * @param zCoefs Coefficients for z-polynomial.
 * @param yawCoefs Coefficients for yaw-polynomial.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_traj_seg_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t nSeg, uint8_t curSeg, float Tdel, const float *xCoefs, const float *yCoefs, const float *zCoefs, const float *yawCoefs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TRAJ_SEG_LEN];
	_mav_put_float(buf, 0, Tdel);
	_mav_put_uint8_t(buf, 164, nSeg);
	_mav_put_uint8_t(buf, 165, curSeg);
	_mav_put_float_array(buf, 4, xCoefs, 10);
	_mav_put_float_array(buf, 44, yCoefs, 10);
	_mav_put_float_array(buf, 84, zCoefs, 10);
	_mav_put_float_array(buf, 124, yawCoefs, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TRAJ_SEG_LEN);
#else
	mavlink_traj_seg_t packet;
	packet.Tdel = Tdel;
	packet.nSeg = nSeg;
	packet.curSeg = curSeg;
	mav_array_memcpy(packet.xCoefs, xCoefs, sizeof(float)*10);
	mav_array_memcpy(packet.yCoefs, yCoefs, sizeof(float)*10);
	mav_array_memcpy(packet.zCoefs, zCoefs, sizeof(float)*10);
	mav_array_memcpy(packet.yawCoefs, yawCoefs, sizeof(float)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TRAJ_SEG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TRAJ_SEG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TRAJ_SEG_LEN, MAVLINK_MSG_ID_TRAJ_SEG_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TRAJ_SEG_LEN);
#endif
}

/**
 * @brief Pack a traj_seg message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param nSeg Total number of segments in trajectory.
 * @param curSeg Current segment in trajectory.
 * @param Tdel The length of time segment is valid.
 * @param xCoefs Coefficients for x-polynomial.
 * @param yCoefs Coefficients for y-polynomial.
 * @param zCoefs Coefficients for z-polynomial.
 * @param yawCoefs Coefficients for yaw-polynomial.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_traj_seg_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t nSeg,uint8_t curSeg,float Tdel,const float *xCoefs,const float *yCoefs,const float *zCoefs,const float *yawCoefs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TRAJ_SEG_LEN];
	_mav_put_float(buf, 0, Tdel);
	_mav_put_uint8_t(buf, 164, nSeg);
	_mav_put_uint8_t(buf, 165, curSeg);
	_mav_put_float_array(buf, 4, xCoefs, 10);
	_mav_put_float_array(buf, 44, yCoefs, 10);
	_mav_put_float_array(buf, 84, zCoefs, 10);
	_mav_put_float_array(buf, 124, yawCoefs, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TRAJ_SEG_LEN);
#else
	mavlink_traj_seg_t packet;
	packet.Tdel = Tdel;
	packet.nSeg = nSeg;
	packet.curSeg = curSeg;
	mav_array_memcpy(packet.xCoefs, xCoefs, sizeof(float)*10);
	mav_array_memcpy(packet.yCoefs, yCoefs, sizeof(float)*10);
	mav_array_memcpy(packet.zCoefs, zCoefs, sizeof(float)*10);
	mav_array_memcpy(packet.yawCoefs, yawCoefs, sizeof(float)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TRAJ_SEG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TRAJ_SEG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TRAJ_SEG_LEN, MAVLINK_MSG_ID_TRAJ_SEG_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TRAJ_SEG_LEN);
#endif
}

/**
 * @brief Encode a traj_seg struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param traj_seg C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_traj_seg_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_traj_seg_t* traj_seg)
{
	return mavlink_msg_traj_seg_pack(system_id, component_id, msg, traj_seg->nSeg, traj_seg->curSeg, traj_seg->Tdel, traj_seg->xCoefs, traj_seg->yCoefs, traj_seg->zCoefs, traj_seg->yawCoefs);
}

/**
 * @brief Encode a traj_seg struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param traj_seg C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_traj_seg_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_traj_seg_t* traj_seg)
{
	return mavlink_msg_traj_seg_pack_chan(system_id, component_id, chan, msg, traj_seg->nSeg, traj_seg->curSeg, traj_seg->Tdel, traj_seg->xCoefs, traj_seg->yCoefs, traj_seg->zCoefs, traj_seg->yawCoefs);
}

/**
 * @brief Send a traj_seg message
 * @param chan MAVLink channel to send the message
 *
 * @param nSeg Total number of segments in trajectory.
 * @param curSeg Current segment in trajectory.
 * @param Tdel The length of time segment is valid.
 * @param xCoefs Coefficients for x-polynomial.
 * @param yCoefs Coefficients for y-polynomial.
 * @param zCoefs Coefficients for z-polynomial.
 * @param yawCoefs Coefficients for yaw-polynomial.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_traj_seg_send(mavlink_channel_t chan, uint8_t nSeg, uint8_t curSeg, float Tdel, const float *xCoefs, const float *yCoefs, const float *zCoefs, const float *yawCoefs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TRAJ_SEG_LEN];
	_mav_put_float(buf, 0, Tdel);
	_mav_put_uint8_t(buf, 164, nSeg);
	_mav_put_uint8_t(buf, 165, curSeg);
	_mav_put_float_array(buf, 4, xCoefs, 10);
	_mav_put_float_array(buf, 44, yCoefs, 10);
	_mav_put_float_array(buf, 84, zCoefs, 10);
	_mav_put_float_array(buf, 124, yawCoefs, 10);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAJ_SEG, buf, MAVLINK_MSG_ID_TRAJ_SEG_LEN, MAVLINK_MSG_ID_TRAJ_SEG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAJ_SEG, buf, MAVLINK_MSG_ID_TRAJ_SEG_LEN);
#endif
#else
	mavlink_traj_seg_t packet;
	packet.Tdel = Tdel;
	packet.nSeg = nSeg;
	packet.curSeg = curSeg;
	mav_array_memcpy(packet.xCoefs, xCoefs, sizeof(float)*10);
	mav_array_memcpy(packet.yCoefs, yCoefs, sizeof(float)*10);
	mav_array_memcpy(packet.zCoefs, zCoefs, sizeof(float)*10);
	mav_array_memcpy(packet.yawCoefs, yawCoefs, sizeof(float)*10);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAJ_SEG, (const char *)&packet, MAVLINK_MSG_ID_TRAJ_SEG_LEN, MAVLINK_MSG_ID_TRAJ_SEG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAJ_SEG, (const char *)&packet, MAVLINK_MSG_ID_TRAJ_SEG_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_TRAJ_SEG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_traj_seg_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t nSeg, uint8_t curSeg, float Tdel, const float *xCoefs, const float *yCoefs, const float *zCoefs, const float *yawCoefs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, Tdel);
	_mav_put_uint8_t(buf, 164, nSeg);
	_mav_put_uint8_t(buf, 165, curSeg);
	_mav_put_float_array(buf, 4, xCoefs, 10);
	_mav_put_float_array(buf, 44, yCoefs, 10);
	_mav_put_float_array(buf, 84, zCoefs, 10);
	_mav_put_float_array(buf, 124, yawCoefs, 10);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAJ_SEG, buf, MAVLINK_MSG_ID_TRAJ_SEG_LEN, MAVLINK_MSG_ID_TRAJ_SEG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAJ_SEG, buf, MAVLINK_MSG_ID_TRAJ_SEG_LEN);
#endif
#else
	mavlink_traj_seg_t *packet = (mavlink_traj_seg_t *)msgbuf;
	packet->Tdel = Tdel;
	packet->nSeg = nSeg;
	packet->curSeg = curSeg;
	mav_array_memcpy(packet->xCoefs, xCoefs, sizeof(float)*10);
	mav_array_memcpy(packet->yCoefs, yCoefs, sizeof(float)*10);
	mav_array_memcpy(packet->zCoefs, zCoefs, sizeof(float)*10);
	mav_array_memcpy(packet->yawCoefs, yawCoefs, sizeof(float)*10);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAJ_SEG, (const char *)packet, MAVLINK_MSG_ID_TRAJ_SEG_LEN, MAVLINK_MSG_ID_TRAJ_SEG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAJ_SEG, (const char *)packet, MAVLINK_MSG_ID_TRAJ_SEG_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE TRAJ_SEG UNPACKING


/**
 * @brief Get field nSeg from traj_seg message
 *
 * @return Total number of segments in trajectory.
 */
static inline uint8_t mavlink_msg_traj_seg_get_nSeg(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  164);
}

/**
 * @brief Get field curSeg from traj_seg message
 *
 * @return Current segment in trajectory.
 */
static inline uint8_t mavlink_msg_traj_seg_get_curSeg(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  165);
}

/**
 * @brief Get field Tdel from traj_seg message
 *
 * @return The length of time segment is valid.
 */
static inline float mavlink_msg_traj_seg_get_Tdel(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field xCoefs from traj_seg message
 *
 * @return Coefficients for x-polynomial.
 */
static inline uint16_t mavlink_msg_traj_seg_get_xCoefs(const mavlink_message_t* msg, float *xCoefs)
{
	return _MAV_RETURN_float_array(msg, xCoefs, 10,  4);
}

/**
 * @brief Get field yCoefs from traj_seg message
 *
 * @return Coefficients for y-polynomial.
 */
static inline uint16_t mavlink_msg_traj_seg_get_yCoefs(const mavlink_message_t* msg, float *yCoefs)
{
	return _MAV_RETURN_float_array(msg, yCoefs, 10,  44);
}

/**
 * @brief Get field zCoefs from traj_seg message
 *
 * @return Coefficients for z-polynomial.
 */
static inline uint16_t mavlink_msg_traj_seg_get_zCoefs(const mavlink_message_t* msg, float *zCoefs)
{
	return _MAV_RETURN_float_array(msg, zCoefs, 10,  84);
}

/**
 * @brief Get field yawCoefs from traj_seg message
 *
 * @return Coefficients for yaw-polynomial.
 */
static inline uint16_t mavlink_msg_traj_seg_get_yawCoefs(const mavlink_message_t* msg, float *yawCoefs)
{
	return _MAV_RETURN_float_array(msg, yawCoefs, 10,  124);
}

/**
 * @brief Decode a traj_seg message into a struct
 *
 * @param msg The message to decode
 * @param traj_seg C-struct to decode the message contents into
 */
static inline void mavlink_msg_traj_seg_decode(const mavlink_message_t* msg, mavlink_traj_seg_t* traj_seg)
{
#if MAVLINK_NEED_BYTE_SWAP
	traj_seg->Tdel = mavlink_msg_traj_seg_get_Tdel(msg);
	mavlink_msg_traj_seg_get_xCoefs(msg, traj_seg->xCoefs);
	mavlink_msg_traj_seg_get_yCoefs(msg, traj_seg->yCoefs);
	mavlink_msg_traj_seg_get_zCoefs(msg, traj_seg->zCoefs);
	mavlink_msg_traj_seg_get_yawCoefs(msg, traj_seg->yawCoefs);
	traj_seg->nSeg = mavlink_msg_traj_seg_get_nSeg(msg);
	traj_seg->curSeg = mavlink_msg_traj_seg_get_curSeg(msg);
#else
	memcpy(traj_seg, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_TRAJ_SEG_LEN);
#endif
}
