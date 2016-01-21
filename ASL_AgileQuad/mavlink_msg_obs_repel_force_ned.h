// MESSAGE OBS_REPEL_FORCE_NED PACKING

#define MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED 152

typedef struct __mavlink_obs_repel_force_ned_t
{
 float Fx; ///< Repulsive is global x-direction.
 float Fy; ///< Repulsive is global y-direction.
 float Fz; ///< Repulsive is global z-direction.
} mavlink_obs_repel_force_ned_t;

#define MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN 12
#define MAVLINK_MSG_ID_152_LEN 12

#define MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_CRC 153
#define MAVLINK_MSG_ID_152_CRC 153



#define MAVLINK_MESSAGE_INFO_OBS_REPEL_FORCE_NED { \
	"OBS_REPEL_FORCE_NED", \
	3, \
	{  { "Fx", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_obs_repel_force_ned_t, Fx) }, \
         { "Fy", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_obs_repel_force_ned_t, Fy) }, \
         { "Fz", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_obs_repel_force_ned_t, Fz) }, \
         } \
}


/**
 * @brief Pack a obs_repel_force_ned message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Fx Repulsive is global x-direction.
 * @param Fy Repulsive is global y-direction.
 * @param Fz Repulsive is global z-direction.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_obs_repel_force_ned_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float Fx, float Fy, float Fz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN];
	_mav_put_float(buf, 0, Fx);
	_mav_put_float(buf, 4, Fy);
	_mav_put_float(buf, 8, Fz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN);
#else
	mavlink_obs_repel_force_ned_t packet;
	packet.Fx = Fx;
	packet.Fy = Fy;
	packet.Fz = Fz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN);
#endif
}

/**
 * @brief Pack a obs_repel_force_ned message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Fx Repulsive is global x-direction.
 * @param Fy Repulsive is global y-direction.
 * @param Fz Repulsive is global z-direction.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_obs_repel_force_ned_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float Fx,float Fy,float Fz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN];
	_mav_put_float(buf, 0, Fx);
	_mav_put_float(buf, 4, Fy);
	_mav_put_float(buf, 8, Fz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN);
#else
	mavlink_obs_repel_force_ned_t packet;
	packet.Fx = Fx;
	packet.Fy = Fy;
	packet.Fz = Fz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN);
#endif
}

/**
 * @brief Encode a obs_repel_force_ned struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param obs_repel_force_ned C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_obs_repel_force_ned_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_obs_repel_force_ned_t* obs_repel_force_ned)
{
	return mavlink_msg_obs_repel_force_ned_pack(system_id, component_id, msg, obs_repel_force_ned->Fx, obs_repel_force_ned->Fy, obs_repel_force_ned->Fz);
}

/**
 * @brief Encode a obs_repel_force_ned struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param obs_repel_force_ned C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_obs_repel_force_ned_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_obs_repel_force_ned_t* obs_repel_force_ned)
{
	return mavlink_msg_obs_repel_force_ned_pack_chan(system_id, component_id, chan, msg, obs_repel_force_ned->Fx, obs_repel_force_ned->Fy, obs_repel_force_ned->Fz);
}

/**
 * @brief Send a obs_repel_force_ned message
 * @param chan MAVLink channel to send the message
 *
 * @param Fx Repulsive is global x-direction.
 * @param Fy Repulsive is global y-direction.
 * @param Fz Repulsive is global z-direction.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_obs_repel_force_ned_send(mavlink_channel_t chan, float Fx, float Fy, float Fz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN];
	_mav_put_float(buf, 0, Fx);
	_mav_put_float(buf, 4, Fy);
	_mav_put_float(buf, 8, Fz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED, buf, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED, buf, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN);
#endif
#else
	mavlink_obs_repel_force_ned_t packet;
	packet.Fx = Fx;
	packet.Fy = Fy;
	packet.Fz = Fz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED, (const char *)&packet, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED, (const char *)&packet, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_obs_repel_force_ned_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float Fx, float Fy, float Fz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, Fx);
	_mav_put_float(buf, 4, Fy);
	_mav_put_float(buf, 8, Fz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED, buf, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED, buf, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN);
#endif
#else
	mavlink_obs_repel_force_ned_t *packet = (mavlink_obs_repel_force_ned_t *)msgbuf;
	packet->Fx = Fx;
	packet->Fy = Fy;
	packet->Fz = Fz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED, (const char *)packet, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED, (const char *)packet, MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE OBS_REPEL_FORCE_NED UNPACKING


/**
 * @brief Get field Fx from obs_repel_force_ned message
 *
 * @return Repulsive is global x-direction.
 */
static inline float mavlink_msg_obs_repel_force_ned_get_Fx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field Fy from obs_repel_force_ned message
 *
 * @return Repulsive is global y-direction.
 */
static inline float mavlink_msg_obs_repel_force_ned_get_Fy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field Fz from obs_repel_force_ned message
 *
 * @return Repulsive is global z-direction.
 */
static inline float mavlink_msg_obs_repel_force_ned_get_Fz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a obs_repel_force_ned message into a struct
 *
 * @param msg The message to decode
 * @param obs_repel_force_ned C-struct to decode the message contents into
 */
static inline void mavlink_msg_obs_repel_force_ned_decode(const mavlink_message_t* msg, mavlink_obs_repel_force_ned_t* obs_repel_force_ned)
{
#if MAVLINK_NEED_BYTE_SWAP
	obs_repel_force_ned->Fx = mavlink_msg_obs_repel_force_ned_get_Fx(msg);
	obs_repel_force_ned->Fy = mavlink_msg_obs_repel_force_ned_get_Fy(msg);
	obs_repel_force_ned->Fz = mavlink_msg_obs_repel_force_ned_get_Fz(msg);
#else
	memcpy(obs_repel_force_ned, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_OBS_REPEL_FORCE_NED_LEN);
#endif
}
