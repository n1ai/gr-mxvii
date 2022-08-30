/* -*- c++ -*- */
/*
 * Copyright 2021 Derek Kozel.
 *
 * Copyright 2022 David Cherkus.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_MXVII_ENCODER_IMPL_H
#define INCLUDED_MXVII_ENCODER_IMPL_H

#include <gnuradio/mxvii/encoder.h>

/* DC: Add initial includes */
#include <m17cxx/M17Modulator.h>
#include <string>

namespace gr {
namespace mxvii {

class encoder_impl : public encoder
{
private:
    /* DC: Initial class variables */
    std::string m_destination_address;
    std::string m_source_address;
    std::shared_ptr<mobilinkd::M17Modulator> modulator;
    std::shared_ptr<mobilinkd::M17Modulator::audio_queue_t> audio_queue;
    std::shared_ptr<mobilinkd::M17Modulator::bitstream_queue_t> bitstream_queue;

public:
    encoder_impl(const std::string source_address, const std::string destination_address);
    ~encoder_impl();

    // Where all the action really happens
    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items);

    /* DC: Initial class methods */
    // void set_destination(const std::string destination);
    // void set_source(const std::string source);

};

} // namespace mxvii
} // namespace gr

#endif /* INCLUDED_MXVII_ENCODER_IMPL_H */
