---
layout: default
hero: true
title: 학습 일기
---

<section class="section" style="padding-top: 48px;">
  <h2 style="font-size:1.6rem;">📔 학습 일기</h2>
  <p class="sec-sub" style="max-width:640px;">
    매 학습 세션의 기록입니다. 형식은 고정 — <b>오늘 한 것 / 배운 핵심 / 내린 결정과 이유 / 막힌 부분 / 다음 할 일 / 정량 메트릭</b>.
    "일기 없는 학습은 없다"가 원칙이며, 특히 <i>왜 그 결정을 내렸는지</i>를 미래의 내가 검증할 수 있게 남깁니다.
  </p>
  <div class="timeline">
    {% assign entries = site.pages
        | where_exp: "p", "p.path contains 'study_guide/journal/'"
        | where_exp: "p", "p.name != 'index.md'"
        | sort: "name" | reverse %}
    {% for p in entries %}
      {% assign key = p.name | remove: ".md" %}
      {% assign meta = site.data.journal[key] %}
      <div class="t-item">
        <div class="t-date mono">{{ key }}</div>
        <a class="t-title" href="{{ p.url | relative_url }}">{{ meta.title | default: p.title | default: key }}</a>
        {% if meta.summary %}<p class="t-sum">{{ meta.summary }}</p>{% endif %}
      </div>
    {% endfor %}
  </div>
</section>
